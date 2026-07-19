/* Function at 0x808F4CC0, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808F4CC0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F4CD8
    r29 = r3;
    r0 = *(0x6ff + r3); // lbz @ 0x808F4CE0
    if (!=) goto 0x0x808f4cf4;
    /* li r3, 0 */ // 0x808F4CEC
    /* b 0x808f4d8c */ // 0x808F4CF0
    r0 = r4 + -2; // 0x808F4CF4
    /* li r31, -1 */ // 0x808F4CF8
    if (<=) goto 0x0x808f4d30;
    if (==) goto 0x0x808f4d20;
    if (==) goto 0x0x808f4d28;
    if (==) goto 0x0x808f4d28;
    /* b 0x808f4d3c */ // 0x808F4D1C
    /* li r31, 8 */ // 0x808F4D20
    /* b 0x808f4d3c */ // 0x808F4D24
    /* li r31, 9 */ // 0x808F4D28
    /* b 0x808f4d3c */ // 0x808F4D2C
    /* li r31, 0xa */ // 0x808F4D30
    /* li r4, 0 */ // 0x808F4D34
    FUN_808F6298(r4); // bl 0x808F6298
    r3 = *(0x6c0 + r29); // lwz @ 0x808F4D3C
    FUN_8061E574(r4); // bl 0x8061E574
    /* lis r3, 0 */ // 0x808F4D44
    /* lfs f0, 0(r3) */ // 0x808F4D48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808F4D4C
    if (>=) goto 0x0x808f4d5c;
    /* li r3, 0 */ // 0x808F4D54
    /* b 0x808f4d8c */ // 0x808F4D58
    /* lis r3, 0 */ // 0x808F4D5C
    /* lfs f0, 0(r3) */ // 0x808F4D60
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808F4D64
    if (>=) goto 0x0x808f4d80;
    if (==) goto 0x0x808f4d80;
    if (==) goto 0x0x808f4d80;
    r31 = r31 + -1; // 0x808F4D7C
    r3 = r29;
    r4 = r31;
    FUN_808F4584(r3, r4); // bl 0x808F4584
    r0 = *(0x24 + r1); // lwz @ 0x808F4D8C
    r31 = *(0x1c + r1); // lwz @ 0x808F4D90
    r30 = *(0x18 + r1); // lwz @ 0x808F4D94
    r29 = *(0x14 + r1); // lwz @ 0x808F4D98
    return;
}