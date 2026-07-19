/* Function at 0x805B3AE8, size=560 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_805B3AE8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805B3AF4
    /* mulli r30, r4, 0xec */ // 0x805B3AF8
    r25 = r3;
    r26 = r4;
    r3 = r3 + r30; // 0x805B3B04
    r27 = r5;
    /* li r29, 0 */ // 0x805B3B0C
    r3 = *(8 + r3); // lwz @ 0x805B3B10
    if (==) goto 0x0x805b3b30;
    r12 = *(0 + r3); // lwz @ 0x805B3B1C
    r12 = *(0x10 + r12); // lwz @ 0x805B3B20
    /* mtctr r12 */ // 0x805B3B24
    /* bctrl  */ // 0x805B3B28
    /* b 0x805b3b34 */ // 0x805B3B2C
    /* li r3, -1 */ // 0x805B3B30
    if (!=) goto 0x0x805b3cfc;
    /* li r28, 0 */ // 0x805B3B3C
    /* clrlwi r0, r28, 0x18 */ // 0x805B3B40
    /* li r4, 0 */ // 0x805B3B44
    /* mulli r0, r0, 0x920 */ // 0x805B3B48
    /* li r5, 0 */ // 0x805B3B4C
    r3 = r25 + r0; // 0x805B3B50
    r31 = r3 + 0x1720; // 0x805B3B54
    /* b 0x805b3b84 */ // 0x805B3B58
    /* clrlwi r0, r5, 0x18 */ // 0x805B3B5C
    if (==) goto 0x0x805b3b80;
    /* mulli r0, r0, 0xec */ // 0x805B3B68
    r3 = r25 + r0; // 0x805B3B6C
    r0 = *(8 + r3); // lwz @ 0x805B3B70
    if (!=) goto 0x0x805b3b80;
    /* li r4, 1 */ // 0x805B3B7C
    r5 = r5 + 1; // 0x805B3B80
    /* clrlwi r0, r5, 0x18 */ // 0x805B3B84
    if (>=) goto 0x0x805b3b98;
    if (==) goto 0x0x805b3b5c;
    if (!=) goto 0x0x805b3c18;
    r12 = *(0 + r31); // lwz @ 0x805B3BA0
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B3BA8
    /* mtctr r12 */ // 0x805B3BAC
    /* bctrl  */ // 0x805B3BB0
    if (==) goto 0x0x805b3c18;
    r3 = *(0x20 + r31); // lhz @ 0x805B3BBC
    r0 = *(0x60 + r31); // lhz @ 0x805B3BC0
    /* andc r0, r3, r0 */ // 0x805B3BC4
    /* clrlwi. r0, r0, 0x1f */ // 0x805B3BC8
    if (==) goto 0x0x805b3c18;
    r0 = *(0x50 + r31); // lbz @ 0x805B3BD0
    /* li r29, 1 */ // 0x805B3BD4
    if (==) goto 0x0x805b3c24;
    if (!=) goto 0x0x805b3bfc;
    r3 = r25 + r30; // 0x805B3BE8
    r4 = r31;
    r3 = r3 + 4; // 0x805B3BF0
    /* li r5, 0 */ // 0x805B3BF4
    FUN_805B1180(r4, r3, r5); // bl 0x805B1180
    r4 = r25 + r30; // 0x805B3BFC
    r0 = *(8 + r4); // lwz @ 0x805B3C00
    r3 = r4 + 0xcc; // 0x805B3C04
    *(0x10 + r4) = r0; // stw @ 0x805B3C08
    r4 = *(8 + r4); // lwz @ 0x805B3C0C
    FUN_805B1F90(r3); // bl 0x805B1F90
    /* b 0x805b3c24 */ // 0x805B3C14
    r28 = r28 + 1; // 0x805B3C18
    if (<) goto 0x0x805b3b40;
    if (!=) goto 0x0x805b3d00;
    /* li r0, 4 */ // 0x805B3C2C
    /* li r5, 0 */ // 0x805B3C30
    /* mtctr r0 */ // 0x805B3C34
    /* clrlwi r0, r5, 0x18 */ // 0x805B3C38
    /* li r6, 0 */ // 0x805B3C3C
    /* mulli r0, r0, 0xb0 */ // 0x805B3C40
    /* li r7, 0 */ // 0x805B3C44
    r3 = r25 + r0; // 0x805B3C48
    r4 = r3 + 0x3ba0; // 0x805B3C4C
    /* b 0x805b3c7c */ // 0x805B3C50
    /* clrlwi r0, r7, 0x18 */ // 0x805B3C54
    if (==) goto 0x0x805b3c78;
    /* mulli r0, r0, 0xec */ // 0x805B3C60
    r3 = r25 + r0; // 0x805B3C64
    r0 = *(8 + r3); // lwz @ 0x805B3C68
    if (!=) goto 0x0x805b3c78;
    /* li r6, 1 */ // 0x805B3C74
    r7 = r7 + 1; // 0x805B3C78
    /* clrlwi r0, r7, 0x18 */ // 0x805B3C7C
    if (>=) goto 0x0x805b3c90;
    if (==) goto 0x0x805b3c54;
    if (!=) goto 0x0x805b3cf0;
    r3 = *(0x20 + r4); // lhz @ 0x805B3C98
    r0 = *(0x60 + r4); // lhz @ 0x805B3C9C
    /* andc r0, r3, r0 */ // 0x805B3CA0
    /* clrlwi. r0, r0, 0x1f */ // 0x805B3CA4
    if (==) goto 0x0x805b3cf0;
    r0 = *(0x50 + r4); // lbz @ 0x805B3CAC
    /* li r29, 1 */ // 0x805B3CB0
    if (==) goto 0x0x805b3d00;
    if (!=) goto 0x0x805b3cd4;
    r3 = r25 + r30; // 0x805B3CC4
    /* li r5, 0 */ // 0x805B3CC8
    r3 = r3 + 4; // 0x805B3CCC
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r25 + r30; // 0x805B3CD4
    r0 = *(8 + r4); // lwz @ 0x805B3CD8
    r3 = r4 + 0xcc; // 0x805B3CDC
    *(0x10 + r4) = r0; // stw @ 0x805B3CE0
    r4 = *(8 + r4); // lwz @ 0x805B3CE4
    FUN_805B1F90(r3); // bl 0x805B1F90
    /* b 0x805b3d00 */ // 0x805B3CEC
    r5 = r5 + 1; // 0x805B3CF0
    if (counter-- != 0) goto 0x0x805b3c38;
    /* b 0x805b3d00 */ // 0x805B3CF8
    /* li r29, 1 */ // 0x805B3CFC
    r3 = r29;
    r0 = *(0x34 + r1); // lwz @ 0x805B3D08
    return;
}