/* Function at 0x808188B8, size=348 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808188B8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r7, 0 */ // 0x808188C0
    /* li r4, 0 */ // 0x808188C4
    *(0x14 + r1) = r0; // stw @ 0x808188C8
    /* li r0, 0xc */ // 0x808188CC
    *(0xc + r1) = r31; // stw @ 0x808188D0
    r31 = r3;
    /* mtctr r0 */ // 0x808188D8
    r5 = r3 + r4; // 0x808188DC
    r8 = *(0x10 + r5); // lwz @ 0x808188E0
    if (==) goto 0x0x8081898c;
    r0 = *(0x2bc + r8); // lwz @ 0x808188EC
    if (==) goto 0x0x80818900;
    r0 = *(0x2b4 + r8); // lbz @ 0x808188F8
    /* b 0x80818904 */ // 0x808188FC
    /* li r0, 0 */ // 0x80818900
    if (==) goto 0x0x80818918;
    r5 = r3 + r4; // 0x8081890C
    *(0x100 + r5) = r7; // stw @ 0x80818910
    /* b 0x80818928 */ // 0x80818914
    r6 = r3 + r4; // 0x80818918
    r5 = *(0x100 + r6); // lwz @ 0x8081891C
    r0 = r5 + 1; // 0x80818920
    *(0x100 + r6) = r0; // stw @ 0x80818924
    r6 = r3 + r4; // 0x80818928
    r5 = *(0x130 + r6); // lwz @ 0x8081892C
    r0 = r5 + -1; // 0x80818934
    *(0x130 + r6) = r0; // stw @ 0x80818938
    if (<=) goto 0x0x8081896c;
    r0 = *(0x2bc + r8); // lwz @ 0x80818940
    r5 = *(0xd0 + r6); // lwz @ 0x80818944
    if (!=) goto 0x0x8081898c;
    /* lfs f0, 0(r5) */ // 0x80818950
    /* stfs f0, 0x2a8(r8) */ // 0x80818954
    /* lfs f0, 4(r5) */ // 0x80818958
    /* stfs f0, 0x2ac(r8) */ // 0x8081895C
    /* lfs f0, 8(r5) */ // 0x80818960
    /* stfs f0, 0x2b0(r8) */ // 0x80818964
    /* b 0x8081898c */ // 0x80818968
    r0 = *(0xd0 + r6); // lwz @ 0x8081896C
    if (==) goto 0x0x8081898c;
    *(0xd0 + r6) = r7; // stw @ 0x80818978
    r0 = *(0x2bc + r8); // lwz @ 0x8081897C
    if (!=) goto 0x0x8081898c;
    *(0x2bc + r8) = r7; // stw @ 0x80818988
    r4 = r4 + 4; // 0x8081898C
    if (counter-- != 0) goto 0x0x808188dc;
    r0 = *(0x160 + r3); // lbz @ 0x80818994
    if (==) goto 0x0x808189ac;
    /* lis r3, 0 */ // 0x808189A0
    r3 = *(0 + r3); // lwz @ 0x808189A4
    FUN_8086680C(r3); // bl 0x8086680C
    /* lis r3, 0 */ // 0x808189AC
    /* li r7, 0 */ // 0x808189B0
    r3 = *(0 + r3); // lwz @ 0x808189B4
    /* lis r5, 0 */ // 0x808189B8
    r6 = *(0x24 + r3); // lbz @ 0x808189BC
    /* b 0x808189f4 */ // 0x808189C0
    r3 = *(0 + r5); // lwz @ 0x808189C4
    r0 = r7 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x808189CC
    /* lwzx r3, r3, r0 */ // 0x808189D0
    r0 = *(0x38 + r3); // lwz @ 0x808189D4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808189D8
    if (!=) goto 0x0x808189f0;
    /* clrlwi r0, r7, 0x18 */ // 0x808189E0
    r4 = *(0x20 + r3); // lbz @ 0x808189E4
    r3 = r31 + r0; // 0x808189E8
    *(0x161 + r3) = r4; // stb @ 0x808189EC
    r7 = r7 + 1; // 0x808189F0
    /* clrlwi r0, r7, 0x18 */ // 0x808189F4
    if (<) goto 0x0x808189c4;
    r0 = *(0x14 + r1); // lwz @ 0x80818A00
    r31 = *(0xc + r1); // lwz @ 0x80818A04
    return;
}