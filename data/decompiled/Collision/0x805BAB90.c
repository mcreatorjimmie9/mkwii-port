/*
 * Address: 0x805BAB90
 * REL Offset: 0x000A82F4
 * Function: setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox
 * Size: 44 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox(/* unknown params */)
{
    // Saved registers: r29

    /* 0xA82F4 */ r4 = r30;
    /* 0xA82F8 */ // stack frame setup/save/restore
    /* 0xA82FC */ local_29 = r3;
    /* 0xA8300 */ r3 = r31 + 0x11A;
    /* 0xA8304 */ *(u32*)(r1 + 0x8) = r0;
    /* 0xA8308 */ // crclr cr1eq
    /* 0xA830C */ sub_0xFFFFFFFFFFFEFC70();
    /* 0xA8310 */ r5 = r3;
    /* 0xA8314 */ r3 = r1 + 0x8;
    /* 0xA8318 */ r4 = 0x7 /* 7 */;
    /* 0xA831C */ sub_0xFFFFFFFFFFFA2F6C();
    /* 0xA8320 */ r3 = 0x00000;
    /* 0xA8324 */ r4 = r30;
    /* 0xA8328 */ r6 = *(r3);
    /* 0xA832C */ r3 = r31 + 0x123;
    /* 0xA8330 */ r5 = r31 + 0x12E;
    /* 0xA8334 */ r0 = *(u32*)(r6 + 0x58);
    /* 0xA8338 */ // cmpwi r0, 0
    /* 0xA833C */ if (0x50 != 0) goto loc_0x0050;
    /* 0xA8340 */ r5 = r31 + 0x129;
    /* 0xA8344 */ // crclr cr1eq
    /* 0xA8348 */ sub_0xFFFFFFFFFFFEFC70();
    /* 0xA834C */ r4 = r3;
    /* 0xA8350 */ r3 = r1 + 0x8;
    /* 0xA8354 */ sub_0xFFFFFFFFFFF9B064();
    /* 0xA8358 */ // cmpwi r3, 0
    /* 0xA835C */ *(u32*)(local_29 + 0x10) = r3;
    /* 0xA8360 */ if (0x8c != 0) goto loc_0x008C;
    /* 0xA8364 */ r5 = 0x00000;
    /* 0xA8368 */ r4 = 0xF1 /* 241 */;
    /* 0xA836C */ r5 = r5 + 0x0;
    /* 0xA8370 */ r3 = r5 + 0x134;
    /* 0xA8374 */ r5 = r5 + 0x14A;
    /* 0xA8378 */ // crclr cr1eq
    /* 0xA837C */ sub_0xFFFFFFFFFFF9B064();
    /* 0xA8380 */ r0 = local_29 + 0x10;
    /* 0xA8384 */ *(u32*)(local_29 + 0x1C) = r0;
    /* 0xA8388 */ // stack frame setup/save/restore
    /* 0xA838C */ // stack frame setup/save/restore
    /* 0xA8390 */ // stack frame setup/save/restore
    /* 0xA8394 */ r0 = *(u32*)(r1 + 0x24);
    /* 0xA8398 */ // save/restore LR
    /* 0xA839C */ r1 = r1 + 0x20;
    /* 0xA83A0 */ return;
}
