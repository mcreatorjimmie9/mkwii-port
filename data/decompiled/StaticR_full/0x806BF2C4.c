/* Function at 0x806BF2C4, size=244 bytes */
/* Stack frame: 416 bytes */

int FUN_806BF2C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -416(r1) */
    r0 = *(0 + r3); // lwz @ 0x806BF2C4
    /* srwi r5, r0, 0x18 */ // 0x806BF2CC
    if (==) goto 0x0x806bf2f4;
    if (==) goto 0x0x806bf334;
    if (==) goto 0x0x806bf350;
    if (==) goto 0x0x806bf360;
    /* b 0x806bf3ac */ // 0x806BF2F0
    /* lis r6, 0 */ // 0x806BF2F4
    r5 = *(0 + r6); // lwzu @ 0x806BF2F8
    r7 = r0 rlwinm 0x18; // rlwinm
    *(8 + r1) = r5; // stw @ 0x806BF300
    r4 = *(4 + r6); // lwz @ 0x806BF304
    r3 = *(8 + r6); // lwz @ 0x806BF30C
    r0 = *(0xc + r6); // lwz @ 0x806BF310
    *(0xc + r1) = r4; // stw @ 0x806BF314
    *(0x10 + r1) = r3; // stw @ 0x806BF318
    *(0x14 + r1) = r0; // stw @ 0x806BF31C
    if (>=) goto 0x0x806bf3ac;
    /* slwi r0, r7, 2 */ // 0x806BF324
    /* lwzx r3, r3, r0 */ // 0x806BF32C
    /* b 0x806bf3b0 */ // 0x806BF330
    /* rlwinm. r0, r0, 0x18, 0x10, 0x1f */ // 0x806BF334
    if (!=) goto 0x0x806bf3ac;
    /* li r3, 0x1037 */ // 0x806BF340
    if (==) goto 0x0x806bf3b0;
    /* li r3, 0x103a */ // 0x806BF348
    /* b 0x806bf3b0 */ // 0x806BF34C
    /* rlwinm. r0, r0, 0x18, 0x10, 0x1f */ // 0x806BF350
    if (!=) goto 0x0x806bf3ac;
    /* li r3, 0x1193 */ // 0x806BF358
    /* b 0x806bf3b0 */ // 0x806BF35C
    /* lis r4, 0 */ // 0x806BF360
    /* li r0, 0x30 */ // 0x806BF364
    r4 = r4 + 0; // 0x806BF368
    r5 = r4 + -4; // 0x806BF370
    /* mtctr r0 */ // 0x806BF374
    r4 = *(4 + r5); // lwz @ 0x806BF378
    r0 = *(8 + r5); // lwzu @ 0x806BF37C
    *(4 + r6) = r4; // stw @ 0x806BF380
    *(8 + r6) = r0; // stwu @ 0x806BF384
    if (counter-- != 0) goto 0x0x806bf378;
    r0 = *(0 + r3); // lwz @ 0x806BF38C
    r0 = r0 rlwinm 0x18; // rlwinm
    if (>=) goto 0x0x806bf3ac;
    /* slwi r0, r0, 2 */ // 0x806BF39C
    /* lwzx r3, r3, r0 */ // 0x806BF3A4
    /* b 0x806bf3b0 */ // 0x806BF3A8
    /* li r3, 0 */ // 0x806BF3AC
    return;
}