class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class ECM_GameComponentBase: CBA_MiscItem {
        author = CSTRING(Author);
        scopeCurator = 1;
        scope = 1;
    };

    class ECM_BaseComponent: ECM_GameComponentBase {
        ecm_hasUnique = 1;
        scopeCurator = 1;
        scope = 1;
    };

    class ECM_BaseNotepad: ECM_BaseComponent {
        author = "Cluster Mod Team";
        displayName = "ECM Notepad";
        useActionTitle = "ECM: Pickup Notepad";
        cen_isNotepad = 1;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };

        class Library {
            libTextDesc = "ECM Notepad";
        };

        class ECM_Notepad {
            type = "notepad";
            id = 0;
            ctrl = 0;
        };
    };

    class cen_notebook: ECM_BaseNotepad {
        displayName = CSTRING(notebook_displayName);
        useActionTitle = QUOTE(NAME_NOTEBOOK);
        picture = QPATHTOF(UI\icon_notebook_ca.paa);
        descriptionShort = CSTRING(notebook_description);
        scopeCurator = 2;
        scope = 2;

        class Library {
            libTextDesc = QUOTE(NAME_NOTEBOOK);
        };

        class cen_data {
            type = "notebook";
            id = 0;
            ctrl = CTRL_NOTEBOOK;
        };
    };

    class cen_fieldbook: ECM_BaseNotepad {
        displayName = CSTRING(fieldbook_displayName);
        useActionTitle = QUOTE(NAME_FIELDBOOK);
        picture = QPATHTOF(UI\icon_fieldbook_ca.paa);
        descriptionShort = CSTRING(fieldbook_description);
        scopeCurator = 2;
        scope = 2;

        class Library {
            libTextDesc = QUOTE(NAME_FIELDBOOK);
        };

        class cen_data {
            type = "fieldbook";
            id = 0;
            ctrl = CTRL_FIELDBOOK;
        };
    };

    // NOTEPAD_ID_LIST(cen_notebook);
    // NOTEPAD_ID_LIST(cen_fieldbook);
};
