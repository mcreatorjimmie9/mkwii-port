/* Function at 0x80661A74, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80661A74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80661A7C
    /* li r5, 0 */ // 0x80661A80
    *(0x14 + r1) = r0; // stw @ 0x80661A84
    /* li r6, 0 */ // 0x80661A88
    *(0xc + r1) = r31; // stw @ 0x80661A8C
    /* li r31, 0 */ // 0x80661A90
    *(8 + r1) = r30; // stw @ 0x80661A94
    r30 = r3;
    FUN_805E4A80(r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661afc;
    r3 = r30;
    /* li r4, 1 */ // 0x80661AAC
    /* li r5, 0 */ // 0x80661AB0
    /* li r6, 0 */ // 0x80661AB4
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661afc;
    r3 = r30;
    /* li r4, 2 */ // 0x80661AC8
    /* li r5, 0 */ // 0x80661ACC
    /* li r6, 0 */ // 0x80661AD0
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80661afc;
    r3 = r30;
    /* li r4, 2 */ // 0x80661AE4
    /* li r5, 1 */ // 0x80661AE8
    /* li r6, 0 */ // 0x80661AEC
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x80661b00;
    /* li r31, 1 */ // 0x80661AFC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80661B04
    r30 = *(8 + r1); // lwz @ 0x80661B08
    r0 = *(0x14 + r1); // lwz @ 0x80661B0C
    return;
}