/*
 * Address: 0x805764D8
 * REL Offset: 0x00063C3C
 * Function: KartCollide::<dtor>
 * Size: 16 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ KartCollide(/* unknown params */)
{
    // Saved registers: r31
    // Has prologue (saves LR)

    /* 0x63C3C */ f3 = f2;
    /* 0x63C40 */ f1 = *(f32*)(r5 + 0x80);
    /* 0x63C44 */ f4 = f2;
    /* 0x63C48 */ f0 = *(f32*)(r4 + 0xC);
    /* 0x63C4C */ *(f32*)(r3 + 0x30) = f0;
    /* 0x63C50 */ *(f32*)(r3 + 0x24) = f2;
    /* 0x63C54 */ *(f32*)(r3 + 0x2C) = f1;
    /* 0x63C58 */ r3 = r3 + 0x3C;
    /* 0x63C5C */ goto loc_0xFFFFFFFFFFFDF71C;
    /* 0x63C60 */ // stwu r1, -0x10(r1)
    /* 0x63C64 */ // save/restore LR
    /* 0x63C68 */ *(u32*)(r1 + 0x14) = r0;
    /* 0x63C6C */ // stack frame setup/save/restore
    /* 0x63C70 */ local_31 = r3;
    /* 0x63C74 */ f1 = *(f32*)(r3 + 0x28);
    /* 0x63C78 */ f0 = *(f32*)(r3 + 0x2C);
}
