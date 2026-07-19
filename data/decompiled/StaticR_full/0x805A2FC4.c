/* Function at 0x805A2FC4, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805A2FC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x805A2FCC
    /* li r31, 0 */ // 0x805A2FD8
    *(0x18 + r1) = r30; // stw @ 0x805A2FDC
    *(0x14 + r1) = r29; // stw @ 0x805A2FE0
    r5 = *(4 + r3); // lwz @ 0x805A2FE4
    r7 = *(0 + r5); // lwz @ 0x805A2FE8
    r0 = *(8 + r7); // lhz @ 0x805A2FEC
    /* mtctr r0 */ // 0x805A2FF0
    if (<=) goto 0x0x805a3028;
    r0 = *(0xa + r7); // lhz @ 0x805A2FFC
    r3 = *(4 + r5); // lwz @ 0x805A3000
    r0 = r7 + r0; // 0x805A3004
    /* lwzx r3, r3, r6 */ // 0x805A3008
    /* lwzux r0, r3, r0 */ // 0x805A300C
    if (!=) goto 0x0x805a3020;
    r31 = r3;
    /* b 0x805a3028 */ // 0x805A301C
    r6 = r6 + 4; // 0x805A3020
    if (counter-- != 0) goto 0x0x805a2ffc;
    /* li r29, 0 */ // 0x805A302C
    if (==) goto 0x0x805a30d4;
    /* li r3, 0xc */ // 0x805A3034
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x805a30d4;
    /* li r0, 0 */ // 0x805A3048
    *(0 + r3) = r0; // stw @ 0x805A304C
    *(4 + r3) = r0; // sth @ 0x805A3050
    *(8 + r3) = r31; // stw @ 0x805A3054
    r0 = *(4 + r31); // lhz @ 0x805A3058
}