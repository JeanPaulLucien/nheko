/*
 * nheko Copyright (C) 2017  Konstantinos Sideris <siderisk@auth.gr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOPIC_EVENT_CONTENT_H
#define TOPIC_EVENT_CONTENT_H

#include <QJsonValue>

#include "Deserializable.h"

/*
 * A topic is a short message detailing what is currently being discussed in the room.
 */

class TopicEventContent : public Deserializable
{
public:
	void deserialize(const QJsonValue &data) override;

	inline QString topic() const;

private:
	QString topic_;
};

inline QString TopicEventContent::topic() const
{
	return topic_;
}

#endif  // TOPIC_EVENT_CONTENT_H
