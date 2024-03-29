/*
    Copyright © 2013 by Maxim Biro <nurupo.contributions@gmail.com>
    Copyright © 2014-2019 by The qTox Project Contributors

    This file is part of qTox, a Qt-based graphical interface for Tox.

    qTox is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTox.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "groupid.h"
#include "toxpk.h"

#include <QString>
#include <QStringList>

#include <cstdint>

class ICoreGroupQuery
{
public:
    ICoreGroupQuery() = default;
    virtual ~ICoreGroupQuery();
    ICoreGroupQuery(const ICoreGroupQuery&) = default;
    ICoreGroupQuery& operator=(const ICoreGroupQuery&) = default;
    ICoreGroupQuery(ICoreGroupQuery&&) = default;
    ICoreGroupQuery& operator=(ICoreGroupQuery&&) = default;

    virtual GroupId getGroupPersistentId(uint32_t groupNumber) const = 0;
    virtual uint32_t getGroupNumberPeers(int groupId) const = 0;
    virtual QString getGroupPeerName(int groupId, int peerId) const = 0;
    virtual ToxPk getGroupPeerPk(int groupId, int peerId) const = 0;
    virtual QStringList getGroupPeerNames(int groupId) const = 0;
    virtual bool getGroupAvEnabled(int groupId) const = 0;
};
