#pragma once

#include <filesystem>
#include <fstream>

#include <Core/ImGui.h>
#include <Panels/Panel.h>
#include <Panels/ResourceImporter.h>
#include <Renderer/Texture.h>
#include <Core/Platform.h>
#include <Core/EventHandler.h>
#include <Panels/ResourceInterface.h>

namespace DT
{
    class ResourceBrowserPanel : public Panel, public EventHandler
    {
<<<<<<< HEAD
    protected:
        std::filesystem::path currentDir;
        std::filesystem::path rootDir;
        unsigned int folderIconID;
        ImGuiTextFilter filter;
        // Switches to column layout when item size is larger than this value
        const float columnSwitchSize = 24.0f;
        const char *windowName = "Resource Browser";

        enum FileCreateType
        {
            FileCreateType_File,
            FileCreateType_Folder
        };
        enum FileAction
        {
            FileAction_None,
            FileAction_Create,
            FileAction_Rename,
            FileAction_Delete
        };

        std::filesystem::path currentDir;  /// @brief Current directory of user.
        std::filesystem::path rootDir;     /// @brief Root resources directory of Ducktape.
        std::filesystem::path resourceDir; /// @brief Resource directory such as icons being used for.
        unsigned int folderIconID;         /// @brief Ready to use initialized folder icon ID.
        unsigned int fileIconID;           /// @brief Ready to use initialized file icon ID.
        ImGuiTextFilter Filter;            /// @brief Filtering of files.
        // Switches to column layout when item size is larger than this value
        const float columnSwitchSize = 24.0f;    /// @brief If item size is set larger than this value, resource browser will switch to column layout.
        FileAction fileAction = FileAction_None; /// @brief Flag for user actions.
        FileCreateType creatingFileType;         /// @brief The file type user trying to create.
        std::filesystem::path selectedFile = ""; /// @brief Holds selected file for actions such as delete / rename that needs confirm.

        void RenderImGuiWindow();
        void RenderDirectoryItem(std::filesystem::directory_entry directoryEntry, int &itemSize);
        void HandleItemSelected(bool isDir, std::filesystem::path path);
        void HandleItemDoubleClicked(bool isDir, std::filesystem::path path);

    public:
        std::filesystem::path selectedItemPath;

        enum Events
        {
            OnItemSelect
        };

        void Start(Engine &engine) override;
        void Update(Engine &engine) override;
        void Destroy() override;
        const char *GetWindowName() override;
    };
}