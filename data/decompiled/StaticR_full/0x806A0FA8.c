/* Function at 0x806A0FA8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806A0FA8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A0FB8
    r3 = *(0x16c + r3); // lwz @ 0x806A0FBC
    if (!=) goto 0x0x806a0fd0;
    /* li r3, 0 */ // 0x806A0FC8
    /* b 0x806a1044 */ // 0x806A0FCC
    FUN_80665D1C(r3); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x806a0fe8;
    /* li r30, 0 */ // 0x806A0FE0
    /* b 0x806a1038 */ // 0x806A0FE4
    /* lis r31, 0 */ // 0x806A0FE8
    r31 = r31 + 0; // 0x806A0FEC
    if (==) goto 0x0x806a1034;
    r12 = *(0 + r3); // lwz @ 0x806A0FF4
    r12 = *(0xc + r12); // lwz @ 0x806A0FF8
    /* mtctr r12 */ // 0x806A0FFC
    /* bctrl  */ // 0x806A1000
    /* b 0x806a101c */ // 0x806A1004
    if (!=) goto 0x0x806a1018;
    /* li r0, 1 */ // 0x806A1010
    /* b 0x806a1028 */ // 0x806A1014
    r3 = *(0 + r3); // lwz @ 0x806A1018
    if (!=) goto 0x0x806a1008;
    /* li r0, 0 */ // 0x806A1024
    if (==) goto 0x0x806a1034;
    /* b 0x806a1038 */ // 0x806A1030
    /* li r30, 0 */ // 0x806A1034
    /* neg r0, r30 */ // 0x806A1038
    r0 = r0 | r30; // 0x806A103C
    /* srwi r3, r0, 0x1f */ // 0x806A1040
    r0 = *(0x14 + r1); // lwz @ 0x806A1044
    r31 = *(0xc + r1); // lwz @ 0x806A1048
    r30 = *(8 + r1); // lwz @ 0x806A104C
    return;
}