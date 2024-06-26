// package_manager.h
#ifndef PACKAGE_MANAGER_H
#define PACKAGE_MANAGER_H

void install_package(const char *pkg_name);
void remove_pkg(const char *pkg_name);
void update_package(const char *package_name);

void initialize();
void cleanup();

#endif // PACKAGE_MANAGER_H
