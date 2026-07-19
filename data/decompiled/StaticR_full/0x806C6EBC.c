/* Function at 0x806C6EBC, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806C6EBC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806C6EC4
    *(0x14 + r1) = r29; // stw @ 0x806C6ED4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806C6EDC
    r28 = r3;
    r5 = *(0 + r5); // lwz @ 0x806C6EE4
    r3 = *(0x90 + r5); // lwz @ 0x806C6EE8
    r0 = *(0x14 + r3); // lbz @ 0x806C6EEC
    if (==) goto 0x0x806c6fc0;
    r3 = *(0 + r5); // lwz @ 0x806C6EF8
    r30 = *(0x13c + r3); // lwz @ 0x806C6EFC
    if (!=) goto 0x0x806c6f10;
    /* li r30, 0 */ // 0x806C6F08
    /* b 0x806c6f64 */ // 0x806C6F0C
    /* lis r31, 0 */ // 0x806C6F10
    r31 = r31 + 0; // 0x806C6F14
    if (==) goto 0x0x806c6f60;
    r12 = *(0 + r30); // lwz @ 0x806C6F1C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C6F24
    /* mtctr r12 */ // 0x806C6F28
    /* bctrl  */ // 0x806C6F2C
    /* b 0x806c6f48 */ // 0x806C6F30
    if (!=) goto 0x0x806c6f44;
    /* li r0, 1 */ // 0x806C6F3C
    /* b 0x806c6f54 */ // 0x806C6F40
    r3 = *(0 + r3); // lwz @ 0x806C6F44
    if (!=) goto 0x0x806c6f34;
    /* li r0, 0 */ // 0x806C6F50
    if (==) goto 0x0x806c6f60;
    /* b 0x806c6f64 */ // 0x806C6F5C
    /* li r30, 0 */ // 0x806C6F60
    r12 = *(0 + r30); // lwz @ 0x806C6F64
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C6F6C
    /* mtctr r12 */ // 0x806C6F70
    /* bctrl  */ // 0x806C6F74
    r12 = *(0 + r30); // lwz @ 0x806C6F78
    r3 = r30;
    /* li r4, 0x816 */ // 0x806C6F80
    /* li r5, 0 */ // 0x806C6F84
    r12 = *(0x68 + r12); // lwz @ 0x806C6F88
    /* mtctr r12 */ // 0x806C6F8C
    /* bctrl  */ // 0x806C6F90
    r12 = *(0 + r28); // lwz @ 0x806C6F94
    r3 = r28;
    /* li r4, 0x4d */ // 0x806C6F9C
    /* li r5, 0 */ // 0x806C6FA0
    r12 = *(0x24 + r12); // lwz @ 0x806C6FA4
    /* mtctr r12 */ // 0x806C6FA8
    /* bctrl  */ // 0x806C6FAC
    r3 = r29;
    /* li r4, 0 */ // 0x806C6FB4
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x806c6fe4 */ // 0x806C6FBC
    r3 = r29;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r28); // lwz @ 0x806C6FC8
    r3 = r28;
    /* li r4, 0x8c */ // 0x806C6FD0
    /* li r5, 0 */ // 0x806C6FD4
    r12 = *(0x1c + r12); // lwz @ 0x806C6FD8
    /* mtctr r12 */ // 0x806C6FDC
    /* bctrl  */ // 0x806C6FE0
    r0 = *(0x24 + r1); // lwz @ 0x806C6FE4
    r31 = *(0x1c + r1); // lwz @ 0x806C6FE8
    r30 = *(0x18 + r1); // lwz @ 0x806C6FEC
    r29 = *(0x14 + r1); // lwz @ 0x806C6FF0
    r28 = *(0x10 + r1); // lwz @ 0x806C6FF4
    return;
}