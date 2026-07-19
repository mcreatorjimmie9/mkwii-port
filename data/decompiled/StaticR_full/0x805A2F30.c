/* Function at 0x805A2F30, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805A2F30(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, 0 */ // 0x805A2F38
    *(0x14 + r1) = r0; // stw @ 0x805A2F3C
    *(0xc + r1) = r31; // stw @ 0x805A2F40
    /* li r31, 0 */ // 0x805A2F44
    r5 = *(4 + r3); // lwz @ 0x805A2F48
    r7 = *(0 + r5); // lwz @ 0x805A2F4C
    r0 = *(8 + r7); // lhz @ 0x805A2F50
    /* mtctr r0 */ // 0x805A2F54
    if (<=) goto 0x0x805a2f8c;
    r0 = *(0xa + r7); // lhz @ 0x805A2F60
    r3 = *(4 + r5); // lwz @ 0x805A2F64
    r0 = r7 + r0; // 0x805A2F68
    /* lwzx r3, r3, r6 */ // 0x805A2F6C
    /* lwzux r0, r3, r0 */ // 0x805A2F70
    if (!=) goto 0x0x805a2f84;
    r31 = r3;
    /* b 0x805a2f8c */ // 0x805A2F80
    r6 = r6 + 4; // 0x805A2F84
    if (counter-- != 0) goto 0x0x805a2f60;
    /* li r3, 0 */ // 0x805A2F90
    if (==) goto 0x0x805a2fb0;
    /* li r3, 0x14 */ // 0x805A2F98
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x805a2fb0;
    r4 = r31;
    FUN_805A5A7C(r3, r4); // bl 0x805A5A7C
    r0 = *(0x14 + r1); // lwz @ 0x805A2FB0
}