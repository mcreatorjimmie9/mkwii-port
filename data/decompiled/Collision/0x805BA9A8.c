/*
 * Address: 0x805BA9A8
 * REL Offset: 0x000A810C
 * Function: initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl
 * Size: 113 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl(/* unknown params */)
{
    // Has prologue (saves LR)

    /* 0xA810C */ r3 = r1 + 0xC;
    /* 0xA8110 */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA8114 */ // cmpwi r3, 0
    /* 0xA8118 */ *(u32*)(r28 + 0x10) = r3;
    /* 0xA811C */ if (0x28 != 0) goto loc_0x0028;
    /* 0xA8120 */ r3 = r30 + 0xE;
    /* 0xA8124 */ r5 = r30 + 0x24;
    /* 0xA8128 */ r4 = 0xD7 /* 215 */;
    /* 0xA812C */ // crclr cr1eq
    /* 0xA8130 */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA8134 */ r29 = r29 + 0x1;
    /* 0xA8138 */ r28 = r28 + 0x4;
    /* 0xA813C */ // cmpwi r29, 3
    /* 0xA8140 */ if (0xffffffffffffffe8 < 0) goto loc_0xFFFFFFFFFFFFFFE8;
    /* 0xA8144 */ goto loc_0x00D8;
    /* 0xA8148 */ r31 = 0x00000;
    /* 0xA814C */ r0 = 0x0 /* 0 */;
    /* 0xA8150 */ r31 = r31 + 0x0;
    /* 0xA8154 */ *(u32*)(r1 + 0x8) = r0;
    /* 0xA8158 */ r29 = r31 + 0x54;
    /* 0xA815C */ r4 = r29;
    /* 0xA8160 */ r3 = r31 + 0x5E;
    /* 0xA8164 */ // crclr cr1eq
    /* 0xA8168 */ sub_0xFFFFFFFFFFFEFE58();
    /* 0xA816C */ r5 = r3;
    /* 0xA8170 */ r3 = r1 + 0x8;
    /* 0xA8174 */ r4 = 0x7 /* 7 */;
    /* 0xA8178 */ sub_0xFFFFFFFFFFFA3154();
    /* 0xA817C */ r3 = 0x00000;
    /* 0xA8180 */ r4 = r29;
    /* 0xA8184 */ r6 = *(r3);
    /* 0xA8188 */ r3 = r31 + 0x67;
    /* 0xA818C */ r5 = r31 + 0x72;
    /* 0xA8190 */ r0 = *(u32*)(r6 + 0x58);
    /* 0xA8194 */ // cmpwi r0, 0
    /* 0xA8198 */ if (0x94 != 0) goto loc_0x0094;
    /* 0xA819C */ r5 = r31 + 0x6D;
    /* 0xA81A0 */ // crclr cr1eq
    /* 0xA81A4 */ sub_0xFFFFFFFFFFFEFE58();
    /* 0xA81A8 */ r4 = r3;
    /* 0xA81AC */ r3 = r1 + 0x8;
    /* 0xA81B0 */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA81B4 */ // cmpwi r3, 0
    /* 0xA81B8 */ *(u32*)(r28 + 0x10) = r3;
    /* 0xA81BC */ if (0xd0 != 0) goto loc_0x00D0;
    /* 0xA81C0 */ r5 = 0x00000;
    /* 0xA81C4 */ r4 = 0xF1 /* 241 */;
    /* 0xA81C8 */ r5 = r5 + 0x0;
    /* 0xA81CC */ r3 = r5 + 0x78;
    /* 0xA81D0 */ r5 = r5 + 0x8E;
    /* 0xA81D4 */ // crclr cr1eq
    /* 0xA81D8 */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA81DC */ r0 = r28 + 0x10;
    /* 0xA81E0 */ *(u32*)(r28 + 0x1C) = r0;
    /* 0xA81E4 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA81E8 */ // stack frame setup/save/restore
    /* 0xA81EC */ // stack frame setup/save/restore
    /* 0xA81F0 */ // stack frame setup/save/restore
    /* 0xA81F4 */ r28 = *(u32*)(r1 + 0x10);
    /* 0xA81F8 */ // save/restore LR
    /* 0xA81FC */ r1 = r1 + 0x20;
    /* 0xA8200 */ return;
    /* 0xA8204 */ // stwu r1, -0x20(r1)
    /* 0xA8208 */ // save/restore LR
    /* 0xA820C */ r5 = 0x00000;
    /* 0xA8210 */ r4 = 0x00000;
    /* 0xA8214 */ *(u32*)(r1 + 0x24) = r0;
    /* 0xA8218 */ r0 = 0x0 /* 0 */;
    /* 0xA821C */ // stack frame setup/save/restore
    /* 0xA8220 */ // stack frame setup/save/restore
    /* 0xA8224 */ r30 = r5 + 0x0;
    /* 0xA8228 */ // stack frame setup/save/restore
    /* 0xA822C */ *(u32*)(r1 + 0x10) = r28;
    /* 0xA8230 */ r28 = r3;
    /* 0xA8234 */ r3 = r30 + 0xBC;
    /* 0xA8238 */ *(u32*)(r1 + 0x8) = r0;
    /* 0xA823C */ r4 = *(r4);
    /* 0xA8240 */ // crclr cr1eq
    /* 0xA8244 */ sub_0xFFFFFFFFFFFEFE58();
    /* 0xA8248 */ r5 = r3;
    /* 0xA824C */ r3 = r1 + 0x8;
    /* 0xA8250 */ r4 = 0x7 /* 7 */;
    /* 0xA8254 */ sub_0xFFFFFFFFFFFA3154();
    /* 0xA8258 */ r29 = 0x0 /* 0 */;
    /* 0xA825C */ r31 = 0x00000;
    /* 0xA8260 */ r4 = *(r31);
    /* 0xA8264 */ r3 = r30 + 0xC5;
    /* 0xA8268 */ r5 = r29 + 0x1;
    /* 0xA826C */ // crclr cr1eq
    /* 0xA8270 */ sub_0xFFFFFFFFFFFEFE58();
    /* 0xA8274 */ r4 = r3;
    /* 0xA8278 */ r3 = r1 + 0x8;
    /* 0xA827C */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA8280 */ // cmpwi r3, 0
    /* 0xA8284 */ *(u32*)(r28 + 0x10) = r3;
    /* 0xA8288 */ if (0x194 != 0) goto loc_0x0194;
    /* 0xA828C */ r3 = r30 + 0xCA;
    /* 0xA8290 */ r5 = r30 + 0xE0;
    /* 0xA8294 */ r4 = 0xD7 /* 215 */;
    /* 0xA8298 */ // crclr cr1eq
    /* 0xA829C */ sub_0xFFFFFFFFFFF9B24C();
    /* 0xA82A0 */ r29 = r29 + 0x1;
    /* 0xA82A4 */ r28 = r28 + 0x4;
    /* 0xA82A8 */ // cmpwi r29, 3
    /* 0xA82AC */ if (0x154 < 0) goto loc_0x0154;
    /* 0xA82B0 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA82B4 */ // stack frame setup/save/restore
    /* 0xA82B8 */ // stack frame setup/save/restore
    /* 0xA82BC */ // stack frame setup/save/restore
    /* 0xA82C0 */ r28 = *(u32*)(r1 + 0x10);
    /* 0xA82C4 */ // save/restore LR
    /* 0xA82C8 */ r1 = r1 + 0x20;
    /* 0xA82CC */ return;
}
