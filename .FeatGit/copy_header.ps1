$cid = docker create ardupilot
$root = "/opt/gcc-arm-none-eabi-10-2020-q4-major"

New-Item -ItemType Directory -Force -Path `
  "arm-none-eabi\include\c++\10.2.1", `
  "lib\gcc\arm-none-eabi\10.2.1\include", `
  "lib\gcc\arm-none-eabi\10.2.1\include-fixed" | Out-Null

docker cp "${cid}:${root}/arm-none-eabi/include/c++/10.2.1/." `
  "arm-none-eabi\include\c++\10.2.1"
docker cp "${cid}:${root}/lib/gcc/arm-none-eabi/10.2.1/include/." `
  "lib\gcc\arm-none-eabi\10.2.1\include"
docker cp "${cid}:${root}/lib/gcc/arm-none-eabi/10.2.1/include-fixed/." `
  "lib\gcc\arm-none-eabi\10.2.1\include-fixed"

pause
docker rm $cid