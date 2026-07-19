/* Function at 0x80832A74, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80832A74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80832A7C
    *(0x14 + r1) = r0; // stw @ 0x80832A80
    r4 = r4 + 0; // 0x80832A84
    *(0xc + r1) = r31; // stw @ 0x80832A88
    r31 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x80832A90
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80832A94
    if (==) goto 0x0x80832ab0;
    /* lfs f1, 0xa4(r4) */ // 0x80832A9C
    /* lfs f2, 0xa8(r4) */ // 0x80832AA0
    /* lfs f3, 0xac(r4) */ // 0x80832AA4
    FUN_8083CBB0(); // bl 0x8083CBB0
    /* b 0x80832ac0 */ // 0x80832AAC
    /* lfs f1, 0xb0(r4) */ // 0x80832AB0
    /* lfs f2, 0xb4(r4) */ // 0x80832AB4
    /* lfs f3, 0(r4) */ // 0x80832AB8
    FUN_8083CBB0(); // bl 0x8083CBB0
    r3 = *(0x74 + r31); // lwz @ 0x80832AC0
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x80832AC4
    if (==) goto 0x0x80832adc;
    /* clrlwi. r0, r3, 0x1e */ // 0x80832ACC
    if (!=) goto 0x0x80832adc;
    r3 = r31;
    FUN_8083BF50(r3); // bl 0x8083BF50
    r0 = *(0x14 + r1); // lwz @ 0x80832ADC
    r31 = *(0xc + r1); // lwz @ 0x80832AE0
    return;
}