/* Function at 0x806D6C6C, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806D6C6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0 */ // 0x806D6C80
    *(0x18 + r1) = r30; // stw @ 0x806D6C84
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806D6C8C
    r29 = r3;
    r3 = r3 + 0x1b8; // 0x806D6C94
    FUN_80660C30(r3); // bl 0x80660C30
    r0 = *(0xc4 + r30); // lwz @ 0x806D6C9C
    /* li r4, 0 */ // 0x806D6CA0
    if (==) goto 0x0x806d6d30;
    if (>=) goto 0x0x806d6cd4;
    if (==) goto 0x0x806d6d18;
    if (>=) goto 0x0x806d6cc8;
    if (>=) goto 0x0x806d6cf4;
    /* b 0x806d6d44 */ // 0x806D6CC4
    if (>=) goto 0x0x806d6d28;
    /* b 0x806d6d20 */ // 0x806D6CD0
    if (>=) goto 0x0x806d6ce8;
    if (>=) goto 0x0x806d6d38;
    /* b 0x806d6d44 */ // 0x806D6CE4
    if (>=) goto 0x0x806d6d44;
    /* b 0x806d6d40 */ // 0x806D6CF0
    /* lis r3, 0 */ // 0x806D6CF4
    r3 = *(0 + r3); // lwz @ 0x806D6CF8
    r0 = *(0x36 + r3); // lha @ 0x806D6CFC
    if (!=) goto 0x0x806d6d10;
    /* li r4, 0x1398 */ // 0x806D6D08
    /* b 0x806d6d44 */ // 0x806D6D0C
    /* li r4, 0x17ad */ // 0x806D6D10
    /* b 0x806d6d44 */ // 0x806D6D14
    /* li r4, 0x17a7 */ // 0x806D6D18
    /* b 0x806d6d44 */ // 0x806D6D1C
    /* li r4, 0x17a6 */ // 0x806D6D20
    /* b 0x806d6d44 */ // 0x806D6D24
    /* li r4, 0x17a8 */ // 0x806D6D28
    /* b 0x806d6d44 */ // 0x806D6D2C
    /* li r4, 0x17af */ // 0x806D6D30
    /* b 0x806d6d44 */ // 0x806D6D34
    /* li r4, 0x17ae */ // 0x806D6D38
    /* b 0x806d6d44 */ // 0x806D6D3C
    /* li r4, 0x17b0 */ // 0x806D6D40
    r3 = r29 + 0x44; // 0x806D6D44
    /* li r5, 0 */ // 0x806D6D48
    FUN_806A0A34(r4, r4, r3, r5); // bl 0x806A0A34
    r0 = *(0x24 + r1); // lwz @ 0x806D6D50
    r31 = *(0x1c + r1); // lwz @ 0x806D6D54
    r30 = *(0x18 + r1); // lwz @ 0x806D6D58
    r29 = *(0x14 + r1); // lwz @ 0x806D6D5C
    return;
}