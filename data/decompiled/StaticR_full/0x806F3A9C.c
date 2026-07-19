/* Function at 0x806F3A9C, size=756 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_806F3A9C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F3AAC
    *(0x18 + r1) = r30; // stw @ 0x806F3AB0
    r30 = r4;
    /* li r4, 0 */ // 0x806F3AB8
    *(0x14 + r1) = r29; // stw @ 0x806F3ABC
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x806F3AC4
    r3 = *(0 + r31); // lwz @ 0x806F3AC8
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f3aec;
    r3 = *(0 + r31); // lwz @ 0x806F3AD8
    /* li r4, 1 */ // 0x806F3ADC
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f3b0c;
    /* lis r3, 0 */ // 0x806F3AEC
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3AF4
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3AFC
    r3 = r29 + r0; // 0x806F3B00
    r28 = *(4 + r3); // lbz @ 0x806F3B04
    /* b 0x806f3b38 */ // 0x806F3B08
    /* lis r3, 0 */ // 0x806F3B0C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3B14
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f3b34;
    /* slwi r0, r30, 3 */ // 0x806F3B24
    r3 = r29 + r0; // 0x806F3B28
    r28 = *(0x14 + r3); // lbz @ 0x806F3B2C
    /* b 0x806f3b38 */ // 0x806F3B30
    /* li r28, 0 */ // 0x806F3B34
    /* lis r31, 0 */ // 0x806F3B38
    /* li r4, 0 */ // 0x806F3B3C
    r3 = *(0 + r31); // lwz @ 0x806F3B40
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f3b64;
    r3 = *(0 + r31); // lwz @ 0x806F3B50
    /* li r4, 1 */ // 0x806F3B54
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f3b84;
    /* lis r3, 0 */ // 0x806F3B64
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3B6C
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3B74
    r3 = r29 + r0; // 0x806F3B78
    r5 = *(2 + r3); // lbz @ 0x806F3B7C
    /* b 0x806f3bb0 */ // 0x806F3B80
    /* lis r3, 0 */ // 0x806F3B84
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3B8C
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f3bac;
    /* slwi r0, r30, 3 */ // 0x806F3B9C
    r3 = r29 + r0; // 0x806F3BA0
    r5 = *(0x12 + r3); // lbz @ 0x806F3BA4
    /* b 0x806f3bb0 */ // 0x806F3BA8
    /* li r5, 0x14 */ // 0x806F3BAC
    /* cntlzw r0, r28 */ // 0x806F3BB4
    /* srwi r0, r0, 5 */ // 0x806F3BB8
    /* li r31, 8 */ // 0x806F3BBC
    /* li r6, 0 */ // 0x806F3BC0
    if (<) goto 0x0x806f3bd4;
    if (>) goto 0x0x806f3bd4;
    /* li r6, 1 */ // 0x806F3BD0
    /* li r7, 0 */ // 0x806F3BD8
    if (<) goto 0x0x806f3bec;
    if (>) goto 0x0x806f3bec;
    /* li r7, 1 */ // 0x806F3BE8
    /* li r8, 1 */ // 0x806F3BF0
    if (!=) goto 0x0x806f3c04;
    if (!=) goto 0x0x806f3c04;
    /* li r8, 0 */ // 0x806F3C00
    /* li r9, 1 */ // 0x806F3C08
    if (!=) goto 0x0x806f3c1c;
    if (!=) goto 0x0x806f3c1c;
    /* li r9, 0 */ // 0x806F3C18
    /* lis r3, 0 */ // 0x806F3C1C
    /* clrlwi r0, r30, 0x18 */ // 0x806F3C20
    r3 = *(0 + r3); // lwz @ 0x806F3C24
    /* mulli r0, r0, 0x248 */ // 0x806F3C28
    /* li r10, 0 */ // 0x806F3C2C
    r4 = *(0x14 + r3); // lwz @ 0x806F3C30
    /* li r3, 0 */ // 0x806F3C34
    r4 = r4 + r0; // 0x806F3C38
    r0 = *(0xc8 + r4); // lwz @ 0x806F3C3C
    if (==) goto 0x0x806f3c58;
    r0 = *(0x208 + r4); // lbz @ 0x806F3C48
    if (!=) goto 0x0x806f3c58;
    /* li r3, 1 */ // 0x806F3C54
    if (==) goto 0x0x806f3d2c;
    if (==) goto 0x0x806f3c78;
    r0 = *(0xcc + r4); // lwz @ 0x806F3C68
    if (==) goto 0x0x806f3c78;
    /* li r10, 1 */ // 0x806F3C74
    r0 = *(0x104 + r4); // lwz @ 0x806F3C78
    if (==) goto 0x0x806f3c98;
    if (==) goto 0x0x806f3cc8;
    if (==) goto 0x0x806f3cf8;
    /* b 0x806f3d24 */ // 0x806F3C94
    if (==) goto 0x0x806f3cb4;
    /* li r31, 3 */ // 0x806F3CA4
    if (==) goto 0x0x806f3d24;
    /* li r31, 7 */ // 0x806F3CAC
    /* b 0x806f3d24 */ // 0x806F3CB0
    /* li r31, 7 */ // 0x806F3CB8
    if (==) goto 0x0x806f3d24;
    /* li r31, 3 */ // 0x806F3CC0
    /* b 0x806f3d24 */ // 0x806F3CC4
    if (==) goto 0x0x806f3ce4;
    /* li r31, 2 */ // 0x806F3CD4
    if (==) goto 0x0x806f3d24;
    /* li r31, 6 */ // 0x806F3CDC
    /* b 0x806f3d24 */ // 0x806F3CE0
    /* li r31, 6 */ // 0x806F3CE8
    if (==) goto 0x0x806f3d24;
    /* li r31, 2 */ // 0x806F3CF0
    /* b 0x806f3d24 */ // 0x806F3CF4
    if (==) goto 0x0x806f3d14;
    /* li r31, 1 */ // 0x806F3D04
    if (==) goto 0x0x806f3d24;
    /* li r31, 5 */ // 0x806F3D0C
    /* b 0x806f3d24 */ // 0x806F3D10
    /* li r31, 5 */ // 0x806F3D18
    if (==) goto 0x0x806f3d24;
    /* li r31, 1 */ // 0x806F3D20
    r28 = *(0xcc + r4); // lwz @ 0x806F3D24
    /* b 0x806f3d48 */ // 0x806F3D28
    if (==) goto 0x0x806f3d38;
    /* li r31, 4 */ // 0x806F3D34
    if (==) goto 0x0x806f3d44;
    /* li r31, 0 */ // 0x806F3D40
    /* li r28, 0x14 */ // 0x806F3D44
    if (==) goto 0x0x806f3d70;
    /* lis r3, 0 */ // 0x806F3D50
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F3D58
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F3D60
    r3 = r29 + r0; // 0x806F3D64
    *(2 + r3) = r28; // stb @ 0x806F3D68
    *(4 + r3) = r31; // stb @ 0x806F3D6C
    r0 = *(0x24 + r1); // lwz @ 0x806F3D70
    r31 = *(0x1c + r1); // lwz @ 0x806F3D74
    r30 = *(0x18 + r1); // lwz @ 0x806F3D78
    r29 = *(0x14 + r1); // lwz @ 0x806F3D7C
    r28 = *(0x10 + r1); // lwz @ 0x806F3D80
    return;
}