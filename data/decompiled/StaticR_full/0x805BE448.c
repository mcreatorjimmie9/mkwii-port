/* Function at 0x805BE448, size=228 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_805BE448(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805BE458
    r30 = r5;
    *(0xe4 + r1) = r29; // stw @ 0x805BE464
    r29 = r4;
    *(0xe0 + r1) = r28; // stw @ 0x805BE46C
    r28 = r3;
    r3 = *(0xbec + r3); // lwz @ 0x805BE474
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x805be508;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    r4 = *(0xbec + r28); // lwz @ 0x805BE48C
    FUN_805AC3BC(r3, r3); // bl 0x805AC3BC
    r3 = *(0xc0 + r1); // lwz @ 0x805BE498
    r0 = *(0xb48 + r28); // lwz @ 0x805BE49C
    if (!=) goto 0x0x805be4f0;
    /* extsb. r0, r30 */ // 0x805BE4A8
    if (<) goto 0x0x805be4c8;
    /* lis r3, 0 */ // 0x805BE4B0
    r5 = *(0xdc + r1); // lwz @ 0x805BE4B4
    r3 = *(0 + r3); // lwz @ 0x805BE4B8
    /* clrlwi r4, r30, 0x18 */ // 0x805BE4BC
    r6 = *(0xd0 + r1); // lbz @ 0x805BE4C0
    FUN_805B4168(r3); // bl 0x805B4168
    /* mulli r3, r29, 0xf0 */ // 0x805BE4C8
    r0 = *(0xb8 + r1); // lwz @ 0x805BE4CC
    /* li r31, 1 */ // 0x805BE4D0
    r3 = r28 + r3; // 0x805BE4D4
    *(0x14 + r3) = r0; // stw @ 0x805BE4D8
    r0 = *(0xbc + r1); // lwz @ 0x805BE4DC
    *(0x10 + r3) = r0; // stw @ 0x805BE4E0
    *(0xe + r3) = r30; // stb @ 0x805BE4E4
    r0 = *(0xc4 + r1); // lwz @ 0x805BE4E8
    *(0xd8 + r3) = r0; // stw @ 0x805BE4EC
    /* lis r4, 0 */ // 0x805BE4F0
    r4 = r4 + 0; // 0x805BE4F8
    /* li r5, 0xc */ // 0x805BE4FC
    /* li r6, 5 */ // 0x805BE500
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xec + r1); // lwz @ 0x805BE50C
    r30 = *(0xe8 + r1); // lwz @ 0x805BE510
    r29 = *(0xe4 + r1); // lwz @ 0x805BE514
    r28 = *(0xe0 + r1); // lwz @ 0x805BE518
    r0 = *(0xf4 + r1); // lwz @ 0x805BE51C
    return;
}