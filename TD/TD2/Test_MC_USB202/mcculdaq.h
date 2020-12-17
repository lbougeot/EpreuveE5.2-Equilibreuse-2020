#ifndef MCCULDAQ_H
#define MCCULDAQ_H

#include <QtGlobal>
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/uldaq.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/UlDaqDeviceManager.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/UlException.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/DioDevice.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/AoDevice.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/AiDevice.h"
#include "/home/USERS/ELEVES/SNIR2019/lbougeot/projet QT/CommandeMoteur/includes/CtrDevice.h"


#define MAX_DEV_COUNT  100
#define MAX_STR_LENGTH 64

class MccUldaq
{
public:
    MccUldaq();
    ~MccUldaq();

    // Digital I/O

    UlError ulDConfigPort(const DigitalDirection _direction,const DigitalPortType _portType = AUXPORT);
    UlError ulDConfigBit(const int _bitNum, const DigitalDirection _direction,const DigitalPortType _portType = AUXPORT);
    UlError ulDioGetInfo(const DioInfoItem _infoItem, const quint8 _index, long &_valeurInfo );
    UlError ulDioGetConfig(quint8 &_valeurConfig);
    UlError ulDOut(const quint8 _valeur,const DigitalPortType _portType = AUXPORT);
    UlError ulDIn(quint8 &_valeur,const DigitalPortType _portType = AUXPORT);
    UlError ulDBitOut(const int _bitNum, const bool _valeurDuBit, const DigitalPortType _portType = AUXPORT);
    UlError ulDBitIn(const int _bitNum,bool &_valeurDuBit, const DigitalPortType _portType = AUXPORT);


    // Sortie Analogique

    UlError GetNumChanelAOut(int &_numChanel);
    UlError GetResolutionAout(int &_resolution);
    UlError ulAOut(const int _canal, const double _valeur, const AOutFlag _flags = AOUT_FF_DEFAULT);

    // Entrée Analogique

    UlError GetNumChanelAIn(int &_numChanel);
    UlError GetResolutionAIn(int &_resolution);
    UlError ulAIn 	(const int _canal, double &_valeur, const AInFlag _flags = AIN_FF_DEFAULT);
    UlError ulAInScan(const int _lowChan,const int _highChan,const int _samplesPerChan,
                      double * rate,const ScanOption _options,const AInScanFlag _flags, double data[] );
    UlError ulAInScanStop();
    UlError ulAInScanStatus(ScanStatus &_status,TransferStatus &_transferStatus);

    // Compteur

    UlError GetNbCompteur(int &_nbCompteur);
    UlError GetResolutionCtr(int &_resolution);
    UlError ulCIn(long &_valeur);
    UlError UlCRead(const CounterRegisterType _registerType, long &_valeur);
    UlError UlCLoad(const CounterRegisterType, const long _valeur);
    UlError UlCClear();


    // Module
    UlError ulFlashLed 	(const int _flashCount);
    DaqDeviceDescriptor getDescripteur() const;

private:
    ul::DaqDevice* daqDev; // désigne le module USB
    ul::DioDevice* dioDev; // désigne le port Digital I/O
    ul::AoDevice*  aoDev;  // designe les sorties analogiques
    ul::AiDevice*  aiDev;  // designe les entrées analogiques
    ul::CtrDevice* ctrDev; // designe le compteur

    DaqDeviceDescriptor descripteur;

    // Digital I/O
    UlError InitDio();
    // Sortie Analogique
    UlError InitAOut();
    // Entrée Analogique
    UlError InitAIn();
    // Compteur
    UlError InitCtr();
};

#endif // MCCULDAQ_H
