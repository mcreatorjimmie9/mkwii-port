/* Function at 0x80792F14, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80792F14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80792F20
    *(0x14 + r1) = r0; // stw @ 0x80792F24
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80792F2C
    r0 = *(0x84 + r3); // lwz @ 0x80792F30
    /* mtctr r0 */ // 0x80792F34
    if (<=) goto 0x0x80792f68;
    r0 = *(0x80 + r6); // lwz @ 0x80792F40
    if (!=) goto 0x0x80792f5c;
    /* slwi r0, r4, 2 */ // 0x80792F4C
    r4 = r3 + r0; // 0x80792F50
    r31 = r4 + 0x80; // 0x80792F54
    /* b 0x80792f6c */ // 0x80792F58
    r6 = r6 + 4; // 0x80792F5C
    r4 = r4 + 1; // 0x80792F60
    if (counter-- != 0) goto 0x0x80792f40;
    /* li r31, 0 */ // 0x80792F68
    if (==) goto 0x0x80792f88;
    r4 = r31;
    /* li r6, 0 */ // 0x80792F78
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80792f8c */ // 0x80792F84
    /* li r3, 0 */ // 0x80792F88
    r0 = *(0x14 + r1); // lwz @ 0x80792F8C
    r31 = *(0xc + r1); // lwz @ 0x80792F90
}