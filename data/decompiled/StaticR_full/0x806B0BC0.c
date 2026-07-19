/* Function at 0x806B0BC0, size=456 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806B0BC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806B0BC8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806B0BD8
    *(0x14 + r1) = r29; // stw @ 0x806B0BDC
    r3 = *(0 + r4); // lwz @ 0x806B0BE0
    r3 = *(0 + r3); // lwz @ 0x806B0BE4
    r29 = *(0x148 + r3); // lwz @ 0x806B0BE8
    if (!=) goto 0x0x806b0bfc;
    /* li r29, 0 */ // 0x806B0BF4
    /* b 0x806b0c50 */ // 0x806B0BF8
    /* lis r30, 0 */ // 0x806B0BFC
    r30 = r30 + 0; // 0x806B0C00
    if (==) goto 0x0x806b0c4c;
    r12 = *(0 + r29); // lwz @ 0x806B0C08
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B0C10
    /* mtctr r12 */ // 0x806B0C14
    /* bctrl  */ // 0x806B0C18
    /* b 0x806b0c34 */ // 0x806B0C1C
    if (!=) goto 0x0x806b0c30;
    /* li r0, 1 */ // 0x806B0C28
    /* b 0x806b0c40 */ // 0x806B0C2C
    r3 = *(0 + r3); // lwz @ 0x806B0C30
    if (!=) goto 0x0x806b0c20;
    /* li r0, 0 */ // 0x806B0C3C
    if (==) goto 0x0x806b0c4c;
    /* b 0x806b0c50 */ // 0x806B0C48
    /* li r29, 0 */ // 0x806B0C4C
    r12 = *(0 + r29); // lwz @ 0x806B0C50
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B0C58
    /* mtctr r12 */ // 0x806B0C5C
    /* bctrl  */ // 0x806B0C60
    /* lis r3, 0 */ // 0x806B0C64
    r3 = *(0 + r3); // lwz @ 0x806B0C68
    r3 = *(0 + r3); // lwz @ 0x806B0C6C
    r3 = *(0 + r3); // lwz @ 0x806B0C70
    r0 = r3 + -0x58; // 0x806B0C74
    if (>) goto 0x0x806b0cd4;
    /* lis r3, 0 */ // 0x806B0C80
    /* slwi r0, r0, 2 */ // 0x806B0C84
    r3 = r3 + 0; // 0x806B0C88
    /* lwzx r3, r3, r0 */ // 0x806B0C8C
    /* mtctr r3 */ // 0x806B0C90
    /* bctr  */ // 0x806B0C94
    r12 = *(0 + r29); // lwz @ 0x806B0C98
    r3 = r29;
    /* li r4, 0x1105 */ // 0x806B0CA0
    /* li r5, 0 */ // 0x806B0CA4
    r12 = *(0x68 + r12); // lwz @ 0x806B0CA8
    /* mtctr r12 */ // 0x806B0CAC
    /* bctrl  */ // 0x806B0CB0
    /* b 0x806b0cd4 */ // 0x806B0CB4
    r12 = *(0 + r29); // lwz @ 0x806B0CB8
    r3 = r29;
    /* li r4, 0x1106 */ // 0x806B0CC0
    /* li r5, 0 */ // 0x806B0CC4
    r12 = *(0x68 + r12); // lwz @ 0x806B0CC8
    /* mtctr r12 */ // 0x806B0CCC
    /* bctrl  */ // 0x806B0CD0
    r12 = *(0 + r31); // lwz @ 0x806B0CD4
    r3 = r31;
    /* li r4, 0x50 */ // 0x806B0CDC
    /* li r5, 0 */ // 0x806B0CE0
    r12 = *(0x24 + r12); // lwz @ 0x806B0CE4
    /* mtctr r12 */ // 0x806B0CE8
    /* bctrl  */ // 0x806B0CEC
    /* li r0, 0 */ // 0x806B0CF0
    *(0x68 + r31) = r0; // stw @ 0x806B0CF4
    /* lis r3, 0 */ // 0x806B0CF8
    r3 = *(0 + r3); // lwz @ 0x806B0CFC
    r3 = *(0 + r3); // lwz @ 0x806B0D00
    r29 = *(0x24c + r3); // lwz @ 0x806B0D04
    if (!=) goto 0x0x806b0d18;
    /* li r29, 0 */ // 0x806B0D10
    /* b 0x806b0d6c */ // 0x806B0D14
    /* lis r30, 0 */ // 0x806B0D18
    r30 = r30 + 0; // 0x806B0D1C
    if (==) goto 0x0x806b0d68;
    r12 = *(0 + r29); // lwz @ 0x806B0D24
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B0D2C
    /* mtctr r12 */ // 0x806B0D30
    /* bctrl  */ // 0x806B0D34
    /* b 0x806b0d50 */ // 0x806B0D38
    if (!=) goto 0x0x806b0d4c;
    /* li r0, 1 */ // 0x806B0D44
    /* b 0x806b0d5c */ // 0x806B0D48
    r3 = *(0 + r3); // lwz @ 0x806B0D4C
    if (!=) goto 0x0x806b0d3c;
    /* li r0, 0 */ // 0x806B0D58
    if (==) goto 0x0x806b0d68;
    /* b 0x806b0d6c */ // 0x806B0D64
    /* li r29, 0 */ // 0x806B0D68
    r0 = r31 + 0x6c; // 0x806B0D6C
    *(0x1928 + r29) = r0; // stw @ 0x806B0D70
    /* lis r3, 0 */ // 0x806B0D74
    r4 = *(0 + r3); // lwz @ 0x806B0D78
    r3 = *(0 + r4); // lwz @ 0x806B0D7C
    r3 = *(0 + r3); // lwz @ 0x806B0D80
    r0 = r3 + -0x58; // 0x806B0D84
}