#pragma once

#ifdef  MZ_PLATFORM_WINDOWS

extern MACOS::Application* MACOS::CreateApplication();
int main(int argc, char** argv)
{
  auto app = MACOS::CreateApplication();
  app->Run();
  delete app;
}
#endif 
