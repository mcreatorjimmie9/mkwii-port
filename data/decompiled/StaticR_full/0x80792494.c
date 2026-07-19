/* Function at 0x80792494, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80792494(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807924AC
    r29 = r3;
    r0 = *(0xa5 + r3); // lbz @ 0x807924B4
    if (==) goto 0x0x807924c8;
    /* li r3, 0 */ // 0x807924C0
    /* b 0x80792570 */ // 0x807924C4
    r3 = r3 + 0x88; // 0x807924C8
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x807924e0;
    /* li r31, 0 */ // 0x807924D8
    /* b 0x8079256c */ // 0x807924DC
    r3 = *(0x80 + r29); // lwz @ 0x807924E0
    if (!=) goto 0x0x807924f4;
    r31 = r29 + 0x80; // 0x807924EC
    /* b 0x80792548 */ // 0x807924F0
    if (==) goto 0x0x80792500;
    r0 = *(0x90 + r3); // lwz @ 0x807924F8
    /* b 0x80792504 */ // 0x807924FC
    /* li r0, -1 */ // 0x80792500
    *(8 + r1) = r0; // stw @ 0x80792504
    r4 = r30;
    r3 = r29 + 0x88; // 0x8079250C
    /* li r6, 1 */ // 0x80792514
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x8079252c;
    /* li r31, 0 */ // 0x80792524
    /* b 0x80792548 */ // 0x80792528
    /* slwi r0, r3, 2 */ // 0x8079252C
    r31 = r29 + r0; // 0x80792530
    r3 = *(0x80 + r31); // lwzu @ 0x80792534
    if (==) goto 0x0x80792548;
    /* li r4, 0 */ // 0x80792540
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80792568;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8079255C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8079256c */ // 0x80792564
    /* li r31, 0 */ // 0x80792568
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80792570
    r31 = *(0x1c + r1); // lwz @ 0x80792574
    r30 = *(0x18 + r1); // lwz @ 0x80792578
    r29 = *(0x14 + r1); // lwz @ 0x8079257C
}