/* Function at 0x8091ECA8, size=388 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091ECA8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r8, 0 */ // 0x8091ECB0
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8091ECC0
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8091ECC8
    r29 = r7;
    r3 = *(0 + r8); // lwz @ 0x8091ECD0
    FUN_8090B0E8(); // bl 0x8090B0E8
    r4 = *(0x34 + r30); // lwz @ 0x8091ECD8
    r0 = r3 rlwinm 1; // rlwinm
    /* lhzx r4, r4, r0 */ // 0x8091ECE0
    if (<=) goto 0x0x8091ecf0;
    r4 = r29;
    /* clrlwi. r0, r4, 0x10 */ // 0x8091ECF0
    /* li r7, 0 */ // 0x8091ECF4
    if (==) goto 0x0x8091ee0c;
    /* addis r5, r4, 1 */ // 0x8091ED00
    r5 = r5 + -8; // 0x8091ED04
    if (<=) goto 0x0x8091edd4;
    /* clrlwi r6, r5, 0x10 */ // 0x8091ED0C
    r5 = r3 rlwinm 2; // rlwinm
    r0 = r6 + 7; // 0x8091ED14
    /* srwi r0, r0, 3 */ // 0x8091ED18
    /* mtctr r0 */ // 0x8091ED1C
    if (<=) goto 0x0x8091edd4;
    r6 = *(0x3c + r30); // lwz @ 0x8091ED28
    r0 = r7 rlwinm 1; // rlwinm
    r7 = r7 + 8; // 0x8091ED30
    /* lwzx r8, r5, r6 */ // 0x8091ED34
    r6 = r31 + r0; // 0x8091ED38
    /* lhzx r8, r8, r0 */ // 0x8091ED3C
    /* sthx r8, r31, r0 */ // 0x8091ED40
    r8 = *(0x3c + r30); // lwz @ 0x8091ED44
    /* lwzx r8, r5, r8 */ // 0x8091ED48
    r8 = r8 + r0; // 0x8091ED4C
    r8 = *(2 + r8); // lhz @ 0x8091ED50
    *(2 + r6) = r8; // sth @ 0x8091ED54
    r8 = *(0x3c + r30); // lwz @ 0x8091ED58
    /* lwzx r8, r5, r8 */ // 0x8091ED5C
    r8 = r8 + r0; // 0x8091ED60
    r8 = *(4 + r8); // lhz @ 0x8091ED64
    *(4 + r6) = r8; // sth @ 0x8091ED68
    r8 = *(0x3c + r30); // lwz @ 0x8091ED6C
    /* lwzx r8, r5, r8 */ // 0x8091ED70
    r8 = r8 + r0; // 0x8091ED74
    r8 = *(6 + r8); // lhz @ 0x8091ED78
    *(6 + r6) = r8; // sth @ 0x8091ED7C
    r8 = *(0x3c + r30); // lwz @ 0x8091ED80
    /* lwzx r8, r5, r8 */ // 0x8091ED84
    r8 = r8 + r0; // 0x8091ED88
    r8 = *(8 + r8); // lhz @ 0x8091ED8C
    *(8 + r6) = r8; // sth @ 0x8091ED90
    r8 = *(0x3c + r30); // lwz @ 0x8091ED94
    /* lwzx r8, r5, r8 */ // 0x8091ED98
    r8 = r8 + r0; // 0x8091ED9C
    r8 = *(0xa + r8); // lhz @ 0x8091EDA0
    *(0xa + r6) = r8; // sth @ 0x8091EDA4
    r8 = *(0x3c + r30); // lwz @ 0x8091EDA8
    /* lwzx r8, r5, r8 */ // 0x8091EDAC
    r8 = r8 + r0; // 0x8091EDB0
    r8 = *(0xc + r8); // lhz @ 0x8091EDB4
    *(0xc + r6) = r8; // sth @ 0x8091EDB8
    r8 = *(0x3c + r30); // lwz @ 0x8091EDBC
    /* lwzx r8, r5, r8 */ // 0x8091EDC0
    r8 = r8 + r0; // 0x8091EDC4
    r0 = *(0xe + r8); // lhz @ 0x8091EDC8
    *(0xe + r6) = r0; // sth @ 0x8091EDCC
    if (counter-- != 0) goto 0x0x8091ed28;
    /* clrlwi r5, r4, 0x10 */ // 0x8091EDD4
    /* clrlwi r6, r7, 0x10 */ // 0x8091EDD8
    /* subf r0, r6, r5 */ // 0x8091EDDC
    r8 = r3 rlwinm 2; // rlwinm
    /* mtctr r0 */ // 0x8091EDE4
    if (>=) goto 0x0x8091ee0c;
    r0 = *(0x3c + r30); // lwz @ 0x8091EDF0
    r5 = r7 rlwinm 1; // rlwinm
    r7 = r7 + 1; // 0x8091EDF8
    /* lwzx r3, r8, r0 */ // 0x8091EDFC
    /* lhzx r0, r3, r5 */ // 0x8091EE00
    /* sthx r0, r31, r5 */ // 0x8091EE04
    if (counter-- != 0) goto 0x0x8091edf0;
    r31 = *(0x1c + r1); // lwz @ 0x8091EE0C
    r3 = r4;
    r30 = *(0x18 + r1); // lwz @ 0x8091EE14
    r29 = *(0x14 + r1); // lwz @ 0x8091EE18
    r0 = *(0x24 + r1); // lwz @ 0x8091EE1C
    return;
}