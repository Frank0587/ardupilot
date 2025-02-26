for %%t in (
   ArduCopter
   ArduPlane
   ArduSub
   APMRover2
   AntennaTracker
) DO (
   git tag %%t-beta        -d
   git tag %%t-beta-heli   -d
   git tag %%t-beta-AVR    -d
   git tag %%t-stable      -d
   git tag %%t-stable-heli -d
   git tag %%t-stable-AVR  -d
)
