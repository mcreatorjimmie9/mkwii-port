/* Function at 0x805A2990, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A2990(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A2998
    /* li r31, 0 */ // 0x805A29A4
    *(0x18 + r1) = r30; // stw @ 0x805A29A8
    *(0x14 + r1) = r29; // stw @ 0x805A29AC
    *(0x10 + r1) = r28; // stw @ 0x805A29B0
    r5 = *(4 + r3); // lwz @ 0x805A29B4
    r7 = *(0 + r5); // lwz @ 0x805A29B8
    r0 = *(8 + r7); // lhz @ 0x805A29BC
    /* mtctr r0 */ // 0x805A29C0
    if (<=) goto 0x0x805a29f8;
    r0 = *(0xa + r7); // lhz @ 0x805A29CC
    r3 = *(4 + r5); // lwz @ 0x805A29D0
    r0 = r7 + r0; // 0x805A29D4
    /* lwzx r3, r3, r6 */ // 0x805A29D8
    /* lwzux r0, r3, r0 */ // 0x805A29DC
    if (!=) goto 0x0x805a29f0;
    r31 = r3;
    /* b 0x805a29f8 */ // 0x805A29EC
    r6 = r6 + 4; // 0x805A29F0
    if (counter-- != 0) goto 0x0x805a29cc;
    /* li r28, 0 */ // 0x805A29FC
    if (==) goto 0x0x805a2a8c;
    /* li r3, 0xc */ // 0x805A2A04
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a2a8c;
    /* li r0, 0 */ // 0x805A2A18
    *(0 + r3) = r0; // stw @ 0x805A2A1C
    r29 = r31 + 8; // 0x805A2A20
    *(4 + r3) = r0; // sth @ 0x805A2A24
    *(8 + r3) = r31; // stw @ 0x805A2A28
    r30 = *(4 + r31); // lhz @ 0x805A2A2C
}