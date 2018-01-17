// supply function definition so including gazebo.hh is not necessary
namespace gazebo
{
  void printVersion();
}

int main() {
  gazebo::printVersion();
  return 0;
}
