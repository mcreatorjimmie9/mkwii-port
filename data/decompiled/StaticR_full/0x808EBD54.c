/* Function at 0x808EBD54, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808EBD54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808EBD5C
    /* slwi r0, r3, 2 */ // 0x808EBD64
    *(0xc + r1) = r31; // stw @ 0x808EBD68
    *(8 + r1) = r30; // stw @ 0x808EBD6C
    r3 = *(0 + r4); // lwz @ 0x808EBD70
    r3 = *(0 + r3); // lwz @ 0x808EBD74
    r3 = r3 + r0; // 0x808EBD78
    r30 = *(8 + r3); // lwz @ 0x808EBD7C
    if (!=) goto 0x0x808ebd90;
    /* li r30, 0 */ // 0x808EBD88
    /* b 0x808ebde4 */ // 0x808EBD8C
    /* lis r31, 0 */ // 0x808EBD90
    r31 = r31 + 0; // 0x808EBD94
    if (==) goto 0x0x808ebde0;
    r12 = *(0 + r30); // lwz @ 0x808EBD9C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EBDA4
    /* mtctr r12 */ // 0x808EBDA8
    /* bctrl  */ // 0x808EBDAC
    /* b 0x808ebdc8 */ // 0x808EBDB0
    if (!=) goto 0x0x808ebdc4;
    /* li r0, 1 */ // 0x808EBDBC
    /* b 0x808ebdd4 */ // 0x808EBDC0
    r3 = *(0 + r3); // lwz @ 0x808EBDC4
    if (!=) goto 0x0x808ebdb4;
    /* li r0, 0 */ // 0x808EBDD0
    if (==) goto 0x0x808ebde0;
    /* b 0x808ebde4 */ // 0x808EBDDC
    /* li r30, 0 */ // 0x808EBDE0
    if (!=) goto 0x0x808ebdf4;
    /* li r30, 0 */ // 0x808EBDEC
    /* b 0x808ebe48 */ // 0x808EBDF0
    /* lis r31, 0 */ // 0x808EBDF4
    r31 = r31 + 0; // 0x808EBDF8
    if (==) goto 0x0x808ebe44;
    r12 = *(0 + r30); // lwz @ 0x808EBE00
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808EBE08
    /* mtctr r12 */ // 0x808EBE0C
    /* bctrl  */ // 0x808EBE10
    /* b 0x808ebe2c */ // 0x808EBE14
    if (!=) goto 0x0x808ebe28;
    /* li r0, 1 */ // 0x808EBE20
    /* b 0x808ebe38 */ // 0x808EBE24
    r3 = *(0 + r3); // lwz @ 0x808EBE28
    if (!=) goto 0x0x808ebe18;
    /* li r0, 0 */ // 0x808EBE34
    if (==) goto 0x0x808ebe44;
    /* b 0x808ebe48 */ // 0x808EBE40
    /* li r30, 0 */ // 0x808EBE44
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EBE4C
    r30 = *(8 + r1); // lwz @ 0x808EBE50
    r0 = *(0x14 + r1); // lwz @ 0x808EBE54
    return;
}