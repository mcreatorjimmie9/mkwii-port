/* Function at 0x80666D88, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80666D88(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80666D9C
    r31 = r31 + 0; // 0x80666DA0
    *(0x18 + r1) = r30; // stw @ 0x80666DA4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80666DAC
    r29 = r3;
    if (==) goto 0x0x80666e00;
    r12 = *(0 + r30); // lwz @ 0x80666DB8
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x80666DC0
    /* mtctr r12 */ // 0x80666DC4
    /* bctrl  */ // 0x80666DC8
    /* b 0x80666de4 */ // 0x80666DCC
    if (!=) goto 0x0x80666de0;
    /* li r0, 1 */ // 0x80666DD8
    /* b 0x80666df0 */ // 0x80666DDC
    r3 = *(0 + r3); // lwz @ 0x80666DE0
    if (!=) goto 0x0x80666dd0;
    /* li r0, 0 */ // 0x80666DEC
    if (==) goto 0x0x80666e00;
    r4 = r30;
    /* b 0x80666e04 */ // 0x80666DFC
    /* li r4, 0 */ // 0x80666E00
    if (==) goto 0x0x80666e70;
    /* li r0, 8 */ // 0x80666E0C
    r3 = r30 + 0xcd; // 0x80666E10
    /* mtctr r0 */ // 0x80666E14
    r0 = *(0 + r3); // lbz @ 0x80666E18
    /* extsb. r0, r0 */ // 0x80666E1C
    if (!=) goto 0x0x80666e2c;
    /* li r0, 0 */ // 0x80666E24
    /* b 0x80666e48 */ // 0x80666E28
    if (!=) goto 0x0x80666e3c;
    /* li r0, 1 */ // 0x80666E34
    /* b 0x80666e48 */ // 0x80666E38
    r3 = r3 + 1; // 0x80666E3C
    if (counter-- != 0) goto 0x0x80666e18;
    /* li r0, 0 */ // 0x80666E44
    if (==) goto 0x0x80666e70;
    r0 = *(0xc + r29); // lwz @ 0x80666E50
    r3 = *(4 + r29); // lwz @ 0x80666E54
    /* mulli r0, r0, 0x18 */ // 0x80666E58
    r3 = r3 + r0; // 0x80666E5C
    FUN_8066EDE8(); // bl 0x8066EDE8
    r3 = *(0xc + r29); // lwz @ 0x80666E64
    r0 = r3 + 1; // 0x80666E68
    *(0xc + r29) = r0; // stw @ 0x80666E6C
    r0 = *(0x24 + r1); // lwz @ 0x80666E70
    r31 = *(0x1c + r1); // lwz @ 0x80666E74
    r30 = *(0x18 + r1); // lwz @ 0x80666E78
    r29 = *(0x14 + r1); // lwz @ 0x80666E7C
    return;
}