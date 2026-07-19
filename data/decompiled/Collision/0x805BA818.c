/*
 * Address: 0x805BA818
 * REL Offset: 0x000A7F7C
 * Function: reset__Q24Kart11HitboxGroupFv
 * Size: 39 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ reset__Q24Kart11HitboxGroupFv(void)
{
    // Saved registers: r31, r30, r29

    /* 0xA7F7C */ // cmpwi r3, 0
    /* 0xA7F80 */ *(u32*)(r1 + 0x24) = r0;
    /* 0xA7F84 */ // stack frame setup/save/restore
    /* 0xA7F88 */ // stack frame setup/save/restore
    /* 0xA7F8C */ local_30 = r4;
    /* 0xA7F90 */ // stack frame setup/save/restore
    /* 0xA7F94 */ local_29 = r3;
    /* 0xA7F98 */ if (0x7c == 0) goto loc_0x007C;
    /* 0xA7F9C */ if (0x6c == 0) goto loc_0x006C;
    /* 0xA7FA0 */ r5 = 0x00000;
    /* 0xA7FA4 */ r4 = 0x00000;
    /* 0xA7FA8 */ r5 = r5 + 0x0;
    /* 0xA7FAC */ *(r3) = r5;
    /* 0xA7FB0 */ local_31 = *(r4);
    /* 0xA7FB4 */ // cmpwi local_31, 0
    /* 0xA7FB8 */ if (0x60 == 0) goto loc_0x0060;
    /* 0xA7FBC */ r0 = 0x0 /* 0 */;
    /* 0xA7FC0 */ *(r4) = r0;
    /* 0xA7FC4 */ if (0x60 == 0) goto loc_0x0060;
    /* 0xA7FC8 */ r3 = local_31;
    /* 0xA7FCC */ r4 = 0x-1 /* -1 */;
    /* 0xA7FD0 */ sub_0xFFFFFFFFFFFFFD78();
    /* 0xA7FD4 */ r3 = local_31;
    /* 0xA7FD8 */ sub_0xFFFFFFFFFFF9B3DC();
    /* 0xA7FDC */ r3 = local_29;
    /* 0xA7FE0 */ r4 = 0x0 /* 0 */;
    /* 0xA7FE4 */ sub_0xFFFFFFFFFFF9B3DC();
    /* 0xA7FE8 */ // cmpwi local_30, 0
    /* 0xA7FEC */ if (0x7c <= 0) goto loc_0x007C;
    /* 0xA7FF0 */ r3 = local_29;
    /* 0xA7FF4 */ sub_0xFFFFFFFFFFF9B3DC();
    /* 0xA7FF8 */ // stack frame setup/save/restore
    /* 0xA7FFC */ r3 = local_29;
    /* 0xA8000 */ // stack frame setup/save/restore
    /* 0xA8004 */ // stack frame setup/save/restore
    /* 0xA8008 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA800C */ // save/restore LR
    /* 0xA8010 */ r1 = r1 + 0x20;
    /* 0xA8014 */ return;
}
