/* Function at 0x80674100, size=128 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80674100(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80674108
    *(0xe4 + r1) = r0; // stw @ 0x8067410C
    /* lfs f0, 0(r4) */ // 0x80674110
    *(0xdc + r1) = r31; // stw @ 0x80674114
    r31 = r3;
    /* stfs f0, 0xbec(r3) */ // 0x8067411C
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x80674128
    /* li r4, 0 */ // 0x8067412C
    r3 = *(0 + r3); // lwz @ 0x80674130
    r3 = r3 + 0x34; // 0x80674134
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    /* clrlwi r0, r3, 0x1c */ // 0x8067413C
    if (==) goto 0x0x80674154;
    /* li r0, 0x901 */ // 0x80674148
    *(0x2c + r1) = r0; // stw @ 0x8067414C
    /* b 0x8067415c */ // 0x80674150
    /* li r0, 0x902 */ // 0x80674154
    *(0x2c + r1) = r0; // stw @ 0x80674158
    r3 = r31 + 0x484; // 0x8067415C
    /* li r4, 0x9ce */ // 0x80674164
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x8067416C
    r31 = *(0xdc + r1); // lwz @ 0x80674170
    return;
}