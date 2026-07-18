/*
 * Address: 0x8072C864
 * REL Offset: 0x00219FC8
 * Function: setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo
 * Size: 17 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(/* unknown params */)
{
    // Saved registers: r31
    // Has prologue (saves LR)

    /* 0x219FC8 */ return;
    /* 0x219FCC */ // stwu r1, -0x10(r1)
    /* 0x219FD0 */ // save/restore LR
    /* 0x219FD4 */ // cmpwi r3, 0
    /* 0x219FD8 */ *(u32*)(r1 + 0x14) = r0;
    /* 0x219FDC */ // stack frame setup/save/restore
    /* 0x219FE0 */ local_31 = r3;
    /* 0x219FE4 */ if (0x2c == 0) goto loc_0x002C;
    /* 0x219FE8 */ // cmpwi r4, 0
    /* 0x219FEC */ if (0x2c <= 0) goto loc_0x002C;
    /* 0x219FF0 */ sub_0xFFFFFFFFFFE29390();
    /* 0x219FF4 */ r3 = local_31;
    /* 0x219FF8 */ // stack frame setup/save/restore
    /* 0x219FFC */ r0 = *(u32*)(r1 + 0x14);
    /* 0x21A000 */ // save/restore LR
    /* 0x21A004 */ r1 = r1 + 0x10;
    /* 0x21A008 */ return;
}
