/* Function at 0x8078AF68, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078AF68(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8078AF78
    r31 = r31 + 0; // 0x8078AF7C
    *(0x18 + r1) = r30; // stw @ 0x8078AF80
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8078AF88
    r4 = *(0x14 + r3); // lbz @ 0x8078AF8C
    r0 = r4 + 1; // 0x8078AF90
    *(0x14 + r3) = r0; // stb @ 0x8078AF94
    /* clrlwi r5, r0, 0x18 */ // 0x8078AF98
    if (<=) goto 0x0x8078afc0;
    /* lis r3, 0 */ // 0x8078AFA4
    /* lfs f1, 0(r31) */ // 0x8078AFA8
    r3 = *(0 + r3); // lwz @ 0x8078AFAC
    /* li r4, 0 */ // 0x8078AFB0
    /* li r5, 0x14 */ // 0x8078AFB4
    FUN_807AB4C4(r3, r4, r5); // bl 0x807AB4C4
    /* b 0x8078bcbc */ // 0x8078AFBC
    /* lis r4, 0 */ // 0x8078AFC0
    /* li r29, 0 */ // 0x8078AFC4
    r0 = *(0 + r4); // lwz @ 0x8078AFC8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8078AFCC
    if (==) goto 0x0x8078afd8;
    /* li r29, 1 */ // 0x8078AFD4
    r0 = *(0x10 + r3); // lwz @ 0x8078AFD8
    if (>) goto 0x0x8078bcbc;
    /* lis r4, 0 */ // 0x8078AFE4
    /* slwi r0, r0, 2 */ // 0x8078AFE8
    r4 = r4 + 0; // 0x8078AFEC
    /* lwzx r4, r4, r0 */ // 0x8078AFF0
    /* mtctr r4 */ // 0x8078AFF4
    /* bctr  */ // 0x8078AFF8
    if (==) goto 0x0x8078b018;
    if (==) goto 0x0x8078b068;
    if (==) goto 0x0x8078b084;
    /* b 0x8078bcbc */ // 0x8078B014
}