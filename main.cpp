#include <iostream>
#include <cstdlib>
#include <string>

int main(void){
    std::cout << "gcc�̃C���X�g�[���ɕK�v�ȃv���O�������C���X�g�[�����Ă��܂��B" << std::endl;
    system("@\"%SystemRoot%\\System32\\WindowsPowerShell\\v1.0\\powershell.exe\" -NoProfile -InputFormat None -ExecutionPolicy Bypass -Command \"[System.Net.ServicePointManager]::SecurityProtocol = 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))\" && SET \"PATH=%PATH%;%ALLUSERSPROFILE%\\chocolatey\bin\"");

    std::cout << "OK." << std::endl;
    std::cout << "�C���X�g�[�����������܂���!" << std::endl;
    std::cout << "InstallCompiler.exe �����s���Ċ����C���X�g�[�����Ă��������B" << std::endl;
    std::cout << "���̃v���O�������I�����Ă��������B" << std::endl;
    std::string buffer;
    std::cin >> buffer;
    return 0;
}
