/* Function at 0x805E7930, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805E7930(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805E793C
    r27 = r3;
    /* li r29, 0 */ // 0x805E7944
    /* li r31, 1 */ // 0x805E7948
    *(0x20 + r3) = r4; // stw @ 0x805E794C
    r3 = *(0x24 + r27); // lwz @ 0x805E7950
    r30 = r29 rlwinm 2; // rlwinm
    /* clrlwi r28, r29, 0x10 */ // 0x805E7958
    /* lwzx r0, r3, r30 */ // 0x805E795C
    if (==) goto 0x0x805e79f8;
    r0 = r31 << r28; // slw
    r3 = *(0x38 + r27); // lhz @ 0x805E796C
    /* clrlwi r0, r0, 0x10 */ // 0x805E7970
    /* and. r0, r3, r0 */ // 0x805E7974
    if (==) goto 0x0x805e7994;
    r3 = *(0x2c + r27); // lwz @ 0x805E797C
    /* slwi r0, r28, 2 */ // 0x805E7980
    /* lwzx r3, r3, r0 */ // 0x805E7984
    r3 = *(0xc + r3); // lwz @ 0x805E7988
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805e79ac */ // 0x805E7990
    r12 = *(0 + r27); // lwz @ 0x805E7994
    r3 = r27;
    r4 = r28;
    r12 = *(0xc + r12); // lwz @ 0x805E79A0
    /* mtctr r12 */ // 0x805E79A4
    /* bctrl  */ // 0x805E79A8
    /* clrlwi r0, r29, 0x10 */ // 0x805E79AC
    r4 = *(0x24 + r27); // lwz @ 0x805E79B0
    r0 = r31 << r0; // slw
    r3 = *(0x38 + r27); // lhz @ 0x805E79B8
    /* clrlwi r0, r0, 0x10 */ // 0x805E79BC
    /* lwzx r4, r4, r30 */ // 0x805E79C0
    /* and. r0, r3, r0 */ // 0x805E79C4
    r4 = *(0xc + r4); // lwz @ 0x805E79C8
    if (==) goto 0x0x805e79e0;
    r3 = *(0x2c + r27); // lwz @ 0x805E79D0
    /* slwi r0, r28, 2 */ // 0x805E79D4
    /* lwzx r3, r3, r0 */ // 0x805E79D8
    r4 = *(0xc + r3); // lwz @ 0x805E79DC
    r3 = *(0x20 + r27); // lwz @ 0x805E79E0
    /* li r5, 6 */ // 0x805E79E4
    r12 = *(0 + r3); // lwz @ 0x805E79E8
    r12 = *(0x34 + r12); // lwz @ 0x805E79EC
    /* mtctr r12 */ // 0x805E79F0
    /* bctrl  */ // 0x805E79F4
    r29 = r29 + 1; // 0x805E79F8
    if (<) goto 0x0x805e7950;
    r0 = *(0x24 + r1); // lwz @ 0x805E7A08
}