import serial
 
ser = serial.Serial('COM6', 115200)

i=0

while(ser.isOpen() == True):
    localization = ser.readline()
    try:
        lat,long = str(localization,'ascii').split(',')
        print ('LA: %s' % lat)
        print ('LO: %s' % long)
        float(lat)
        float(long)
    except ValueError :
        print ('I Dont fucking know error')
