#/bin/bash
echo "Installing bgtools"
bash -c "$(curl -sSL https://artifactory.berkshiregrey.com/artifactory/generic-local/bg_tools/setup-developer/linux/setup-developer)"
echo "Installing devbox"
bgtool deps install devbox
echo "creating workspace"
bgtool ws create fuji-smalls -w ~/devel/ros_ws
echo "copy swiftdecoder files"
cp -pirv /tmp/5.2.17 /usr/local/swiftdecoder/
echo "build source codes"
cd ~/devel/ros_ws
catkin build hyper_scanner
echo" source the environment"
source ./devel/setup.bash
echo "run the app"
./devel/lib/hyper_scanner/bg_scanner_main ./src/bg_customer/customer_systems/systems/fuji_frankensystem/config/hyperscanner.yaml
