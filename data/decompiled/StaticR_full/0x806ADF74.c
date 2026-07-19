/* Function at 0x806ADF74, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806ADF74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x806ADF84
    *(0x14 + r1) = r29; // stw @ 0x806ADF8C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806ADF94
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x806ADF9C
    r3 = *(0 + r3); // lwz @ 0x806ADFA0
    r3 = *(0x404 + r3); // lwz @ 0x806ADFA4
    FUN_8065924C(); // bl 0x8065924C
    if (==) goto 0x0x806ae080;
    r3 = *(0 + r31); // lwz @ 0x806ADFB4
    r3 = *(0 + r3); // lwz @ 0x806ADFB8
    r30 = *(0x13c + r3); // lwz @ 0x806ADFBC
    if (!=) goto 0x0x806adfd0;
    /* li r30, 0 */ // 0x806ADFC8
    /* b 0x806ae024 */ // 0x806ADFCC
    /* lis r31, 0 */ // 0x806ADFD0
    r31 = r31 + 0; // 0x806ADFD4
    if (==) goto 0x0x806ae020;
    r12 = *(0 + r30); // lwz @ 0x806ADFDC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ADFE4
    /* mtctr r12 */ // 0x806ADFE8
    /* bctrl  */ // 0x806ADFEC
    /* b 0x806ae008 */ // 0x806ADFF0
    if (!=) goto 0x0x806ae004;
    /* li r0, 1 */ // 0x806ADFFC
    /* b 0x806ae014 */ // 0x806AE000
    r3 = *(0 + r3); // lwz @ 0x806AE004
    if (!=) goto 0x0x806adff4;
    /* li r0, 0 */ // 0x806AE010
    if (==) goto 0x0x806ae020;
    /* b 0x806ae024 */ // 0x806AE01C
    /* li r30, 0 */ // 0x806AE020
    r12 = *(0 + r30); // lwz @ 0x806AE024
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806AE02C
    /* mtctr r12 */ // 0x806AE030
    /* bctrl  */ // 0x806AE034
    r12 = *(0 + r30); // lwz @ 0x806AE038
    r3 = r30;
    /* li r4, 0x13f7 */ // 0x806AE040
    /* li r5, 0 */ // 0x806AE044
    r12 = *(0x68 + r12); // lwz @ 0x806AE048
    /* mtctr r12 */ // 0x806AE04C
    /* bctrl  */ // 0x806AE050
    r12 = *(0 + r28); // lwz @ 0x806AE054
    r3 = r28;
    /* li r4, 0x4d */ // 0x806AE05C
    /* li r5, 0 */ // 0x806AE060
    r12 = *(0x24 + r12); // lwz @ 0x806AE064
    /* mtctr r12 */ // 0x806AE068
    /* bctrl  */ // 0x806AE06C
    r3 = r29;
    /* li r4, 0 */ // 0x806AE074
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x806ae09c */ // 0x806AE07C
    /* li r0, 0xa5 */ // 0x806AE080
    *(0xf30 + r28) = r0; // stw @ 0x806AE084
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806AE094
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806AE09C
    r31 = *(0x1c + r1); // lwz @ 0x806AE0A0
    r30 = *(0x18 + r1); // lwz @ 0x806AE0A4
    r29 = *(0x14 + r1); // lwz @ 0x806AE0A8
    r28 = *(0x10 + r1); // lwz @ 0x806AE0AC
    return;
}