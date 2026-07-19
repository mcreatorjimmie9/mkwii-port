/* Function at 0x805D12B8, size=104 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805D12B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805D12C4
    r0 = *(0x60c + r3); // lbz @ 0x805D12C8
    if (==) goto 0x0x805d12dc;
    /* li r3, 0 */ // 0x805D12D4
    /* b 0x805d1310 */ // 0x805D12D8
    /* li r4, 1 */ // 0x805D12DC
    *(0x60c + r3) = r4; // stb @ 0x805D12E0
    r0 = *(0x619 + r3); // lbz @ 0x805D12E4
    if (==) goto 0x0x805d130c;
    *(0x618 + r3) = r4; // stb @ 0x805D12F0
    /* lis r4, 0 */ // 0x805D12F4
    /* lis r6, 0x1000 */ // 0x805D12F8
    r3 = *(0x584 + r3); // lwz @ 0x805D12FC
    r4 = r4 + 0; // 0x805D1300
    r6 = r6 + 4; // 0x805D1304
    FUN_805E3430(r4, r6, r4, r6); // bl 0x805E3430
    /* li r3, 1 */ // 0x805D130C
    r0 = *(0x14 + r1); // lwz @ 0x805D1310
    return;
}