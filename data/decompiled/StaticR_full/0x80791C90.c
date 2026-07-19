/* Function at 0x80791C90, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80791C90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80791CA8
    r29 = r3;
    r3 = r3 + 0x8c; // 0x80791CB0
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x80791cc8;
    /* li r3, 0 */ // 0x80791CC0
    /* b 0x80791d80 */ // 0x80791CC4
    r3 = *(0x80 + r29); // lwz @ 0x80791CC8
    if (!=) goto 0x0x80791cdc;
    r31 = r29 + 0x80; // 0x80791CD4
    /* b 0x80791d58 */ // 0x80791CD8
    if (==) goto 0x0x80791ce8;
    r0 = *(0x90 + r3); // lwz @ 0x80791CE0
    /* b 0x80791cec */ // 0x80791CE4
    /* li r0, -1 */ // 0x80791CE8
    *(8 + r1) = r0; // stw @ 0x80791CEC
    r3 = *(0x84 + r29); // lwz @ 0x80791CF0
    if (!=) goto 0x0x80791d04;
    r31 = r29 + 0x84; // 0x80791CFC
    /* b 0x80791d58 */ // 0x80791D00
    if (==) goto 0x0x80791d10;
    r0 = *(0x90 + r3); // lwz @ 0x80791D08
    /* b 0x80791d14 */ // 0x80791D0C
    /* li r0, -1 */ // 0x80791D10
    *(0xc + r1) = r0; // stw @ 0x80791D14
    r4 = r30;
    r3 = r29 + 0x8c; // 0x80791D1C
    /* li r6, 2 */ // 0x80791D24
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x80791d3c;
    /* li r31, 0 */ // 0x80791D34
    /* b 0x80791d58 */ // 0x80791D38
    /* slwi r0, r3, 2 */ // 0x80791D3C
    r31 = r29 + r0; // 0x80791D40
    r3 = *(0x80 + r31); // lwzu @ 0x80791D44
    if (==) goto 0x0x80791d58;
    /* li r4, 0 */ // 0x80791D50
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80791d7c;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80791D6C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80791d80 */ // 0x80791D78
    /* li r3, 0 */ // 0x80791D7C
    r0 = *(0x24 + r1); // lwz @ 0x80791D80
    r31 = *(0x1c + r1); // lwz @ 0x80791D84
    r30 = *(0x18 + r1); // lwz @ 0x80791D88
    r29 = *(0x14 + r1); // lwz @ 0x80791D8C
}