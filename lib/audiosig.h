/* --------------------------------------------------------------------------

   MusicBrainz -- The Internet music metadatabase

   Portions Copyright (C) 2000 Relatable
   
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

   $Id$

----------------------------------------------------------------------------*/
#ifndef AUDIOSIG_H
#define AUDIOSIG_H

#define NUMSIGFIELDS 35

class AudioSig
{
public:
    AudioSig(float energy, float zxing, float length, int *spectrum)
    { m_fEnergy = energy; m_fZXing = zxing; m_fLength = length;
      for (int i = 0; i < 32; i++) m_iSpectrum[i] = spectrum[i];
    }
   ~AudioSig() {}

    float Energy()   { return m_fEnergy; }
    float ZXing()    { return m_fZXing; }
    float Length()   { return m_fLength; }
    int  *Spectrum() { return m_iSpectrum; }

    void SetEnergy(float energy) { m_fEnergy = energy; }
    void SetZXing(float zxing) { m_fZXing = zxing; }
    void SetLength(float length) { m_fLength = length; }
    void SetSpectrum(int pos, int value) { m_iSpectrum[pos] = value; }

private:
    float m_fEnergy;
    float m_fZXing;
    float m_fLength;
    int   m_iSpectrum[32];
};

#endif /* AUDIOSIG_H */