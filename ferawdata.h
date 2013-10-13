#ifndef FERAWDATA_H
#define FERAWDATA_H

#include "rawdata.h"

class FERawData : public RawData
{
	Q_OBJECT
public:
	FERawData();
	void setData(unsigned short locationid,bool isflashonly,QByteArray payload);
	QByteArray data();
	unsigned short locationId();
	bool isFlashOnly();
private:
	QByteArray m_data;
	bool m_isFlashOnly;
	unsigned short m_locationId;
signals:
	void update();
	void saveSingleDataToFlash(unsigned short locationid,unsigned short offset, unsigned short size,QByteArray data);
	void saveSingleDataToRam(unsigned short locationid,unsigned short offset, unsigned short size,QByteArray data);
};

#endif // FERAWDATA_H
