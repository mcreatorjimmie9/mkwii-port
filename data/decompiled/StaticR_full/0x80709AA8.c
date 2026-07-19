/* Function at 0x80709AA8, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_80709AA8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80709AB0
    *(0x18 + r1) = r30; // stw @ 0x80709ABC
    *(0x14 + r1) = r29; // stw @ 0x80709AC0
    r29 = r3;
    r5 = *(0x28f4 + r3); // lwz @ 0x80709AC8
    r3 = r5 + 0x98; // 0x80709ACC
    FUN_8069F4B0(r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80709AD4
    if (!=) goto 0x0x80709b94;
    r3 = *(0x28f8 + r29); // lwz @ 0x80709AE0
    /* li r4, 0 */ // 0x80709AE4
    r3 = r3 + 0x98; // 0x80709AE8
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80709AF0
    if (!=) goto 0x0x80709b94;
    r31 = *(0x28f4 + r29); // lwz @ 0x80709AFC
    /* li r4, 0 */ // 0x80709B00
    r3 = r31 + 0x98; // 0x80709B04
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80709B0C
    /* li r4, 5 */ // 0x80709B10
    /* lfs f1, 0(r5) */ // 0x80709B14
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r30 = r31 + 0x174; // 0x80709B1C
    /* li r31, 0 */ // 0x80709B20
    r3 = r30;
    /* li r4, 0 */ // 0x80709B28
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r31 = r31 + 1; // 0x80709B30
    r30 = r30 + 0x254; // 0x80709B34
    if (<) goto 0x0x80709b24;
    r3 = *(0x2904 + r29); // lwz @ 0x80709B40
    /* addic. r0, r3, -1 */ // 0x80709B44
    *(0x2904 + r29) = r0; // stw @ 0x80709B48
    if (>=) goto 0x0x80709b5c;
    r3 = *(0x2900 + r29); // lwz @ 0x80709B50
    r0 = r3 + -1; // 0x80709B54
    *(0x2904 + r29) = r0; // stw @ 0x80709B58
    r4 = *(0x28f4 + r29); // lwz @ 0x80709B5C
    r3 = r29;
    r0 = *(0x28f8 + r29); // lwz @ 0x80709B64
    *(0x28f4 + r29) = r0; // stw @ 0x80709B68
    *(0x28f8 + r29) = r4; // stw @ 0x80709B6C
    FUN_80709740(r3); // bl 0x80709740
    r3 = *(0x28f4 + r29); // lwz @ 0x80709B74
    /* li r4, 0 */ // 0x80709B78
    r3 = r3 + 0x98; // 0x80709B7C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80709B84
    /* li r4, 1 */ // 0x80709B88
    /* lfs f1, 0(r5) */ // 0x80709B8C
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x80709B94
    r31 = *(0x1c + r1); // lwz @ 0x80709B98
    r30 = *(0x18 + r1); // lwz @ 0x80709B9C
    r29 = *(0x14 + r1); // lwz @ 0x80709BA0
    return;
}