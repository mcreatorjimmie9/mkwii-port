/* Function at 0x80647BBC, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80647BBC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x80647BC4
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80647BD4
    *(0x14 + r1) = r29; // stw @ 0x80647BD8
    r4 = *(0 + r6); // lwz @ 0x80647BDC
    r0 = *(0x1c + r4); // lwz @ 0x80647BE0
    if (==) goto 0x0x80647c78;
    r0 = *(0x24 + r4); // lbz @ 0x80647BEC
    if (==) goto 0x0x80647d28;
    r4 = *(0x200 + r3); // lbz @ 0x80647BF8
    if (>=) goto 0x0x80647d28;
    r4 = r4 + 1; // 0x80647C04
    *(0x200 + r3) = r4; // stb @ 0x80647C08
    /* lis r3, 0 */ // 0x80647C0C
    /* li r0, 0 */ // 0x80647C10
    r6 = *(0 + r6); // lwz @ 0x80647C14
    /* clrlwi r5, r4, 0x18 */ // 0x80647C18
    r4 = r4 rlwinm 2; // rlwinm
    /* lfs f0, 0(r3) */ // 0x80647C20
    *(0x28 + r6) = r5; // stw @ 0x80647C24
    r3 = r6 + r4; // 0x80647C28
    r3 = r3 + 0x10; // 0x80647C2C
    /* li r31, 0 */ // 0x80647C30
    *(0x1c + r6) = r3; // stw @ 0x80647C34
    /* lis r30, 0 */ // 0x80647C38
    /* stfs f0, 0x20(r6) */ // 0x80647C3C
    *(0x24 + r6) = r0; // stb @ 0x80647C40
    /* b 0x80647c60 */ // 0x80647C44
    r3 = *(0 + r30); // lwz @ 0x80647C48
    /* clrlwi r4, r31, 0x18 */ // 0x80647C4C
    FUN_8061D97C(); // bl 0x8061D97C
    /* li r4, 1 */ // 0x80647C54
    FUN_8061EF88(r4); // bl 0x8061EF88
    r31 = r31 + 1; // 0x80647C5C
    r3 = *(0 + r30); // lwz @ 0x80647C60
    /* clrlwi r4, r31, 0x18 */ // 0x80647C64
    r0 = *(0x24 + r3); // lbz @ 0x80647C68
    if (<) goto 0x0x80647c48;
    /* b 0x80647d28 */ // 0x80647C74
    /* li r5, 0 */ // 0x80647C78
    *(0x25 + r4) = r5; // stb @ 0x80647C7C
    r0 = *(0x201 + r3); // lbz @ 0x80647C80
    if (!=) goto 0x0x80647c94;
    FUN_806346AC(r5); // bl 0x806346AC
    /* b 0x80647cf8 */ // 0x80647C90
    r4 = *(0x200 + r3); // lbz @ 0x80647C94
    /* lis r3, 0 */ // 0x80647C98
    r6 = *(0 + r6); // lwz @ 0x80647C9C
    /* li r29, 0 */ // 0x80647CA0
    /* slwi r0, r4, 2 */ // 0x80647CA4
    /* lfs f0, 0(r3) */ // 0x80647CA8
    r3 = r6 + r0; // 0x80647CAC
    *(0x28 + r6) = r4; // stw @ 0x80647CB0
    r0 = r3 + 0x10; // 0x80647CB4
    /* lis r30, 0 */ // 0x80647CB8
    *(0x1c + r6) = r0; // stw @ 0x80647CBC
    /* stfs f0, 0x20(r6) */ // 0x80647CC0
    *(0x24 + r6) = r5; // stb @ 0x80647CC4
    /* b 0x80647ce4 */ // 0x80647CC8
    r3 = *(0 + r30); // lwz @ 0x80647CCC
    /* clrlwi r4, r29, 0x18 */ // 0x80647CD0
    FUN_8061D97C(); // bl 0x8061D97C
    /* li r4, 1 */ // 0x80647CD8
    FUN_8061EF88(r4); // bl 0x8061EF88
    r29 = r29 + 1; // 0x80647CE0
    r3 = *(0 + r30); // lwz @ 0x80647CE4
    /* clrlwi r4, r29, 0x18 */ // 0x80647CE8
    r0 = *(0x24 + r3); // lbz @ 0x80647CEC
    if (<) goto 0x0x80647ccc;
    r0 = *(0x50 + r31); // lbz @ 0x80647CF8
    if (==) goto 0x0x80647d28;
    r0 = *(0x201 + r31); // lbz @ 0x80647D04
    if (!=) goto 0x0x80647d20;
    /* lis r3, 0 */ // 0x80647D10
    /* li r0, 1 */ // 0x80647D14
    r3 = *(0 + r3); // lwz @ 0x80647D18
    *(0x25 + r3) = r0; // stb @ 0x80647D1C
    /* li r0, 1 */ // 0x80647D20
    *(0x201 + r31) = r0; // stb @ 0x80647D24
    r0 = *(0x24 + r1); // lwz @ 0x80647D28
    r31 = *(0x1c + r1); // lwz @ 0x80647D2C
    r30 = *(0x18 + r1); // lwz @ 0x80647D30
    r29 = *(0x14 + r1); // lwz @ 0x80647D34
    return;
}