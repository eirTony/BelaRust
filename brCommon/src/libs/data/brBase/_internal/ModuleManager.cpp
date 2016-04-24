#include "ModuleManager.h"

#include <QCoreApplication>

#include "Diagnostic.h"

DEFINE_SINGLETON(ModuleManager)

ModuleManager::ModuleManager(void) {;}

/*! @fn QStringList ModuleInfo::moduleNames(void) // static
 * @brief ModuleInfo::moduleNames
 * @return QStringList module names
 *
 * Returns each of the names of the modules that have
 * been created in this process.
 */
QStringList ModuleManager::moduleNames(void) // static
{
    return mNamePtrMap.keys();
}

/*! @fn void ModuleInfo::debugVersions(void) // static
 * @internal
 * @brief ModuleInfo::debugVersions writes to QtDebug for each registered library.
 */
void ModuleManager::dumpVersions(void) // static
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        TRACE("%1 - %2 [%3]", p->name(), p->version().toString(true));
}

void ModuleManager::muster(ModuleInfo * pModule)
{
    ERRORNOT(pModule, "sender module null");
    if (pModule)
        mNamePtrMap.insert(pModule->name(), pModule);
}

/* ======================================= SLOTs ========== */

void ModuleManager::onConstruct(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doConstruct();
    emit constructing();
}

void ModuleManager::onExecute(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doExecute();
    emit executing();
}

void ModuleManager::onTest(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doTest();
    emit testing();
}

void ModuleManager::onInitialize(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doInitialize();
    emit initializing();
}

void ModuleManager::onConfigure(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doConfigure();
    emit configuring();
}

void ModuleManager::onStart(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doStart();
    emit starting();
}

void ModuleManager::onStop(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doStop();
    emit stoping();
}

void ModuleManager::onQuit(void)
{
    foreach (ModuleInfo * p, mNamePtrMap.values())
        p->doQuit();
    emit quiting();
}

