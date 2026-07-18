/*
 * Address: 0x805BA4A4
 * REL Offset: 0x000A7C08
 * Function: update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff
 * Size: 58 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0xA7C08 */ r29 = r29 + 0x1;
    /* 0xA7C0C */ r3 = *(r30);
    /* 0xA7C10 */ // clrlwi r4, r29, 0x18
    /* 0xA7C14 */ r0 = *(u8*)(r3 + 0x24);
    /* 0xA7C18 */ // cmplw r4, r0
    /* 0xA7C1C */ if (0xffffffffffffffec < 0) goto loc_0xFFFFFFFFFFFFFFEC;
    /* 0xA7C20 */ r0 = *(u8*)(r31 + 0x50);
    /* 0xA7C24 */ // cmpwi r0, 0
    /* 0xA7C28 */ if (0x48 == 0) goto loc_0x0048;
    /* 0xA7C2C */ r0 = *(u8*)(r31 + 0x201);
    /* 0xA7C30 */ // cmpwi r0, 0
    /* 0xA7C34 */ if (0x40 != 0) goto loc_0x0040;
    /* 0xA7C38 */ r3 = 0x00000;
    /* 0xA7C3C */ r0 = 0x1 /* 1 */;
    /* 0xA7C40 */ r3 = *(r3);
    /* 0xA7C44 */ *(u8*)(r3 + 0x25) = r0;
    /* 0xA7C48 */ r0 = 0x1 /* 1 */;
    /* 0xA7C4C */ *(u8*)(r31 + 0x201) = r0;
    /* 0xA7C50 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA7C54 */ // stack frame setup/save/restore
    /* 0xA7C58 */ // stack frame setup/save/restore
    /* 0xA7C5C */ // stack frame setup/save/restore
    /* 0xA7C60 */ // save/restore LR
    /* 0xA7C64 */ r1 = r1 + 0x20;
    /* 0xA7C68 */ return;
    /* 0xA7C6C */ // stwu r1, -0x10(r1)
    /* 0xA7C70 */ // save/restore LR
    /* 0xA7C74 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7C78 */ // stack frame setup/save/restore
    /* 0xA7C7C */ r31 = r3;
    /* 0xA7C80 */ sub_0xFFFFFFFFFFFEC2F4();
    /* 0xA7C84 */ r3 = 0x00000;
    /* 0xA7C88 */ r0 = 0x1 /* 1 */;
    /* 0xA7C8C */ r3 = r3 + 0x0;
    /* 0xA7C90 */ *(r31) = r3;
    /* 0xA7C94 */ r3 = r31;
    /* 0xA7C98 */ *(u32*)(r31 + 0x4C) = r0;
    /* 0xA7C9C */ // stack frame setup/save/restore
    /* 0xA7CA0 */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7CA4 */ // save/restore LR
    /* 0xA7CA8 */ r1 = r1 + 0x10;
    /* 0xA7CAC */ return;
    /* 0xA7CB0 */ // stwu r1, -0x10(r1)
    /* 0xA7CB4 */ // save/restore LR
    /* 0xA7CB8 */ *(u32*)(r1 + 0x14) = r0;
    /* 0xA7CBC */ // stack frame setup/save/restore
    /* 0xA7CC0 */ r31 = r3;
    /* 0xA7CC4 */ sub_0xFFFFFFFFFFFEC9C4();
    /* 0xA7CC8 */ r3 = r31;
    /* 0xA7CCC */ sub_0xFFFFFFFFFFFEB0C8();
    /* 0xA7CD0 */ *(u32*)(r31 + 0x8) = r3;
    /* 0xA7CD4 */ r3 = r31;
    /* 0xA7CD8 */ sub_0xFFFFFFFFFFFED1EC();
    /* 0xA7CDC */ r0 = *(u32*)(r1 + 0x14);
    /* 0xA7CE0 */ // stack frame setup/save/restore
    /* 0xA7CE4 */ // save/restore LR
    /* 0xA7CE8 */ r1 = r1 + 0x10;
    /* 0xA7CEC */ return;
}
