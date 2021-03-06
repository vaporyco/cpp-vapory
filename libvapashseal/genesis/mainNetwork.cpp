/*
		This file is part of cpp-vapory.

		cpp-vapory is free software: you can redistribute it and/or modify
		it under the terms of the GNU General Public License as published by
		the Free Software Foundation, either version 3 of the License, or
		(at your option) any later version.

		cpp-vapory is distributed in the hope that it will be useful,
		but WITHOUT ANY WARRANTY; without even the implied warranty of
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		GNU General Public License for more details.

		You should have received a copy of the GNU General Public License
		along with cpp-vapory.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "../GenesisInfo.h"

static dev::h256 const c_genesisStateRootMainNetwork("37347c5a42a09598f868c05b1840a15d3ade340ce0c0bc939f2429175b9f3c5d");
static std::string const c_genesisInfoMainNetwork = std::string() +
R"E(
{
	"sealEngine": "Vapash",
	"params": {
		"accountStartNonce": "0x00",
		"homesteadForkBlock": "0x0",
		"daoHardforkBlock": "0x0",
		"EIP150ForkBlock": "0x0",
		"EIP158ForkBlock": "0x0",
		"byzantiumForkBlock": "0x0",
		"constantinopleForkBlock": "0xffffffffffffffffff",
		"networkID" : "0x01",
		"chainID": "0x01",
		"maximumExtraDataSize": "0x20",
		"tieBreakingGas": false,
		"minGasLimit": "0x1388",
		"maxGasLimit": "7fffffffffffffff",
		"gasLimitBoundDivisor": "0x0400",
		"minimumDifficulty": "0x020000",
		"difficultyBoundDivisor": "0x0800",
		"durationLimit": "0x0d",
		"blockReward": "0x4563918244F40000"
	},
	"genesis": {
		"nonce": "0x0000000770000000",
		"difficulty": "0x100000",
		"mixHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
		"author": "0x0000000000000000000000000000000000000000",
		"timestamp": "0x00",
		"parentHash": "0x0000000000000000000000000000000000000000000000000000000000000000",
		"extraData": "0xb272d27cef629a8487e50db5ae5310ee01da9862f4a3d6a1cfdeb22774b8e3ec",
		"gasLimit": "0xffeeff"
	},
	"accounts": {
		"0000000000000000000000000000000000000001": { "precompiled": { "name": "ecrecover", "linear": { "base": 3000, "word": 0 } } },
		"0000000000000000000000000000000000000002": { "precompiled": { "name": "sha256", "linear": { "base": 60, "word": 12 } } },
		"0000000000000000000000000000000000000003": { "precompiled": { "name": "ripemd160", "linear": { "base": 600, "word": 120 } } },
		"0000000000000000000000000000000000000004": { "precompiled": { "name": "identity", "linear": { "base": 15, "word": 3 } } },
		"0000000000000000000000000000000000000005": { "precompiled": { "name": "modexp", "startingBlock": "0x42ae50" } },
		"0000000000000000000000000000000000000006": { "precompiled": { "name": "alt_bn128_G1_add", "startingBlock": "0x42ae50", "linear": { "base": 500, "word": 0 } } },
		"0000000000000000000000000000000000000007": { "precompiled": { "name": "alt_bn128_G1_mul", "startingBlock": "0x42ae50", "linear": { "base": 40000, "word": 0 } } },
		"0000000000000000000000000000000000000008": { "precompiled": { "name": "alt_bn128_pairing_product", "startingBlock": "0x42ae50" } },
		"0xb1f1facaf464a162f70f29062a026ff1b4da7c12": {
      "balance": "10000000000000000000000"
    },
    "0x4ce406a4da0c448a5deab45e16ba7e44947458c8": {
      "balance": "10000000000000000000000"
    },
    "0xcb678e3eaff8dfbfd37efe1d7a7bc0ec4f576e68": {
      "balance": "10000000000000000000000"
    },
    "0x13961f4f0fc210773adb51d6a3e469843f5dba8e": {
      "balance": "10000000000000000000000"
    },
    "0x9d0debd425be90488579f778646295dac4b7c47f": {
      "balance": "10000000000000000000000"
    },
    "0xe392bb6b2e957095efa93a8845eebdd21e7016da": {
      "balance": "10000000000000000000000"
    },
    "0x28376877d7940b0cc14b51701126460cc20b10ee": {
      "balance": "10000000000000000000000"
    },
    "0xb8ecc014e5e8976b89648a32bebf3fd5e96ec8bc": {
      "balance": "10000000000000000000000"
    },
    "0x29f41462c9e864e9432ef3d6b0880b82e4d5850d": {
      "balance": "10000000000000000000000"
    },
    "0xbc58b4565db2f47f9944b570a675d8e81638dd45": {
      "balance": "10000000000000000000000"
    },
    "0x0b1b862bb8d6b94a89ab37d3515f5b181f537670": {
      "balance": "10000000000000000000000"
    },
    "0xce6cd24d24238d208f771584df017ddd1b9c10b8": {
      "balance": "10000000000000000000000"
    },
    "0x9a467bb0745b5cf1a58ba6ec9fa5d062f060ad4d": {
      "balance": "10000000000000000000000"
    },
    "0x7ae0b9a0a67cb65ab669a6a4c1d7fd90cad01a47": {
      "balance": "10000000000000000000000"
    },
    "0x2ea8ba8e7eb787e903c4aebe38235062b450e3bc": {
      "balance": "10000000000000000000000"
    },
    "0xff1b522e4ea448da4a854abc0d1d7a36c724bbbe": {
      "balance": "10000000000000000000000"
    },
    "0xd257ac0aeb04c8ca5ce1c719697c088f63fb902e": {
      "balance": "10000000000000000000000"
    },
    "0xf61498fb992efedd2728a4ce9f9f4536126d33a3": {
      "balance": "10000000000000000000000"
    },
	"0x09312972b0422dc54c52eaeeff24fc708f08d990": {
      "balance": "10000000000000000000000"
    },
    "0x9dbcf656d618b2cbb8125a79913841772ed2881a": {
      "balance": "10000000000000000000000"
    },
    "0x9af44b8a94c47696bd3c78d409b3b5030b966119": {
      "balance": "10000000000000000000000"
    },
    "0xa92e633154ed2e559d597c6323938bb25e987f94": {
      "balance": "10000000000000000000000"
    },
    "0x5e583886082a0a073448237d76407d466204e1bb": {
      "balance": "10000000000000000000000"
    },
    "0xc0e9c6c7587b4061186abf3eb7bb702048320e4f": {
      "balance": "10000000000000000000000"
    },
    "0x0d9a579d26b61a07cf3facc0981e9ee7306c76f5": {
      "balance": "10000000000000000000000"
    },
    "0xb2ac12b70ddca353fb2f928a783fd1a1ab393534": {
      "balance": "10000000000000000000000"
    },
    "0xb29d73f13e26ca479af09d0113c44d71abc3787b": {
      "balance": "10000000000000000000000"
    },
    "0xa600ceac304cc2eed233b0af3db8b89538f8835e": {
      "balance": "10000000000000000000000"
    },
    "0x87440f0b51cd2aae689256ecf06d3a43b2f1675f": {
      "balance": "10000000000000000000000"
    },
    "0xc1fd9e6ff4b6a4fd6fdcef0c97618abe821d0dfc": {
      "balance": "10000000000000000000000"
    },
    "0x74361d0312043f5ee63de8eb56d6aee93ed8ffde": {
      "balance": "10000000000000000000000"
    },
    "0xff407aa40abc5feea97b6ef5f6cd8ebcf333a091": {
      "balance": "10000000000000000000000"
    },
    "0x52dbc4062c036a0a7cc4dcb93adbf7c2f031eb1a": {
      "balance": "10000000000000000000000"
    },
    "0xa983b024bbb3396edb2864cdcdf5f3754e5eed9b": {
      "balance": "10000000000000000000000"
    },
    "0x2699dd9dcf17b5c7949d262e1bb0d0d4cc6a720d": {
      "balance": "10000000000000000000000"
    },
    "0xec8e3c5576104107ab0c9d2e52f59a06ee025201": {
      "balance": "10000000000000000000000"
    },
    "0x3ffc1fd87e24498941f5e690dce227c22df4aed2": {
      "balance": "10000000000000000000000"
    },
    "0x82a05c3b56b1b1a7ed2a9680444f8a277a7842f0": {
      "balance": "10000000000000000000000"
    },
	"0xe521aee6cff845f3457dc1f7492282429d536fe1": {
      "balance": "10000000000000000000000"
    },
    "0x05e168a9b76f77a5cd3d74735cec9c3281877d33": {
      "balance": "10000000000000000000000"
    },
    "0x759305408ba09cf50e29519a23383669e81bfe83": {
      "balance": "10000000000000000000000"
    },
    "0x456e02a215d63c99bfedd722f3ccce6810385913": {
      "balance": "10000000000000000000000"
    },
    "0xf4c4a50a61ea248c42a42c57d631a736356d9101": {
      "balance": "10000000000000000000000"
    },
    "0x4a30b3068820c2e2ad70c79e9c504fb4837c8718": {
      "balance": "10000000000000000000000"
    },
    "0xc02b206819dc4c9389c958b73d9896633566c58a": {
      "balance": "10000000000000000000000"
    },
    "0x871c6b371674b2e87ae9cd7b8fbbe2dcb8790dde": {
      "balance": "10000000000000000000000"
    },
    "0xd00313b9bd29a296f2e34bf3c0cd7225bd64f139": {
      "balance": "10000000000000000000000"
    },
    "0x6a5d5d072ad24a681e211e30a269cfe015a73aae": {
      "balance": "10000000000000000000000"
    },
    "0xfa60853054a73a3033a50814cce1b657c388b646": {
      "balance": "10000000000000000000000"
    },
    "0x64e66b1274f27205f98a11d921639314e3872cad": {
      "balance": "10000000000000000000000"
    },
    "0xb9229d505240a7d9b69cd77203a78682139b4709": {
      "balance": "10000000000000000000000"
    },
    "0x0ae7dc74950cf293103b094366649c8c41a15178": {
      "balance": "10000000000000000000000"
    },
    "0x3879da43a1a4a114ce8aa0f49fa3a4cce65a3836": {
      "balance": "10000000000000000000000"
    },
    "0x8b06caf8ff716946283e3fd5e3fd9576711a637a": {
      "balance": "10000000000000000000000"
    },
    "0x42567c6e19bc1493339742804d3dc1a55d1e9454": {
      "balance": "10000000000000000000000"
    },
    "0x6a243f6d62380d46eb29695549fa3ac6cbeb8180": {
      "balance": "10000000000000000000000"
    },
    "0x511d9e2396f22701e6672344e3bed710a20923c2": {
      "balance": "10000000000000000000000"
    },
    "0xa379bdb218ef0eb0795091898abd2b9fe37f2230": {
      "balance": "10000000000000000000000"
    },
	"0x7c763efcda5a044124b2294cdbf4c7296c4edb3c": {
      "balance": "10000000000000000000000"
    },
    "0x9cca5cc0e423d8078e394566feac286e000a14fd": {
      "balance": "10000000000000000000000"
    },
    "0x6c42c969ec53e8c8165d73d06851ef20b5ad10d6": {
      "balance": "10000000000000000000000"
    },
    "0x67669d7013a59fd241350213b0cf810067c3d4c6": {
      "balance": "10000000000000000000000"
    },
    "0x342f5180b3fdc72768aa1ff7ba75601cc47d323e": {
      "balance": "10000000000000000000000"
    },
    "0xecdf0a54ecd00a47239cd4c5ad3a5e21f5481207": {
      "balance": "10000000000000000000000"
    },
    "0x03244825efd034dbf8b0a98d96b6f882a2f24141": {
      "balance": "10000000000000000000000"
    },
    "0x168f108c39466f20adc94a5ef5641dc0111b7d45": {
      "balance": "10000000000000000000000"
    },
    "0x7d995bf8d96be700ca75711abdbbcc38759b3665": {
      "balance": "10000000000000000000000"
    },
    "0xfbdbe28ee64272156eccb003e6591a9994a3c920": {
      "balance": "10000000000000000000000"
    },
    "0xbe5af886c91020354b79507ada417331200a96d3": {
      "balance": "10000000000000000000000"
    },
    "0xafdffa4c377adb5cfb5ad1282439f4892f77e99d": {
      "balance": "10000000000000000000000"
    },
    "0x82f7fc9bb811868f0775e226022c841982f36caa": {
      "balance": "10000000000000000000000"
    },
    "0x7377287defe5424fabacf4fa223eaeb5364c56fa": {
      "balance": "10000000000000000000000"
    },
    "0x0270e0c646e5d350e3dc5aaa7630cb861d605b92": {
      "balance": "10000000000000000000000"
    },
    "0xb041188a76ddaa4ac7d115695e39347e47fbcc89": {
      "balance": "10000000000000000000000"
    },
    "0x124563ef4676cdd6f7343a02f401cb8ff1a69093": {
      "balance": "10000000000000000000000"
    },
    "0x164845e0f3ee8ecd69dda2d203d24eb2a260d9f2": {
      "balance": "10000000000000000000000"
    },
    "0x9ad18c95104b50079718c39856d8159b95bed331": {
      "balance": "10000000000000000000000"
    },
	"0xcb091b5631c9662d0ae36b06ea5242ba36a8a01e": {
      "balance": "10000000000000000000000"
    },
    "0x055e21ad14d4910fe3350b044647c82962b1b647": {
      "balance": "10000000000000000000000"
    },
    "0x6e59d1320d386a62dffcff9cafe51a7677698828": {
      "balance": "10000000000000000000000"
    },
    "0x90004bbde64084291751057c34dc0b4155e7e020": {
      "balance": "10000000000000000000000"
    },
    "0x58435cc036ce0582650ac1587598d523a2e7df2b": {
      "balance": "10000000000000000000000"
    },
    "0x01769f0a7fe0b8d3e402adf2327d7161165fb241": {
      "balance": "10000000000000000000000"
    },
    "0x2f6afc891b6e6ef6b9ed6001464f14232d66139e": {
      "balance": "10000000000000000000000"
    },
    "0x42552253f6271e228dfd942649e2a3bd1d031fa9": {
      "balance": "10000000000000000000000"
    },
    "0x28dae2a7cce1c35e96ebb547fb91b706afbb0fc5": {
      "balance": "10000000000000000000000"
    },
    "0x753db0e8f88c6bdfd73aafecb0305fb8bde09e2a": {
      "balance": "10000000000000000000000"
    },
    "0x1082f80d08909937b167d7c1d933d5a498c3085d": {
      "balance": "10000000000000000000000"
    },
    "0x846a72145a26ec113e3f2da243ce6387b3114c72": {
      "balance": "10000000000000000000000"
    },
    "0x64b11df81aeeaf60c729459b8e19cf4a7af98031": {
      "balance": "10000000000000000000000"
    },
    "0x5d3a3e3054bb6bae6836b821e3dded047591dc0d": {
      "balance": "10000000000000000000000"
    },
    "0xd762e73b2487dd5c5829fb0a27d16a789fe57d2b": {
      "balance": "10000000000000000000000"
    },
    "0xbe27e9067d583fa4adf7508be7a15267ae1221d8": {
      "balance": "10000000000000000000000"
    },
    "0x7ab4cc2979fe710e0ed3aa1e59d10ef6197de097": {
      "balance": "10000000000000000000000"
    },
    "0xb6d36072df6c9f8161b572f9ece2da29bf36b74f": {
      "balance": "10000000000000000000000"
    },
    "0x2e887648fa77992d0ded4907e7ed50e40f9c9e53": {
      "balance": "10000000000000000000000"
    },
	"0xd74717e7dd3c325636433fda0a17f1ab714064c2": {
      "balance": "10000000000000000000000"
    },
    "0x900edcf9f84c870264a8c32716b0a89978e79a92": {
      "balance": "10000000000000000000000"
    },
    "0x71dd91c663c1a983b851e5cccbdb2f5bba201b7b": {
      "balance": "10000000000000000000000"
    },
    "0xc194c48d52c0dbaac830e04214917481794dc1cb": {
      "balance": "10000000000000000000000"
    },
    "0x37e9a56f40c96915621cf4df2f888a31950ba858": {
      "balance": "10000000000000000000000"
    },
    "0x4e9781fd74ca5a32de7869730541ddc6af35af64": {
      "balance": "10000000000000000000000"
    },
    "0xc7bab8c15f1d09db01cb57accece08a9224a67c2": {
      "balance": "10000000000000000000000"
    },
    "0xd32a43ce8c0716b3af17485f7027cb1b7a4edb08": {
      "balance": "10000000000000000000000"
    },
    "0xa62e02962c1cd1f212664dda5a5848e918d46687": {
      "balance": "10000000000000000000000"
    },
    "0xc86dc91d432a2a49227d20e74473d7f7c02a4013": {
      "balance": "10000000000000000000000"
    },
    "0x72087738f7bdf6aa3a157d6a735bbba0f77d3f75": {
      "balance": "10000000000000000000000"
    },
    "0xe34a44f9bded5149b6286809e294b0ba940a3d25": {
      "balance": "10000000000000000000000"
    },
    "0x762f893dcc224c07d23d75462d8eb2f50615bc97": {
      "balance": "10000000000000000000000"
    },
    "0x914bcaeb590497ccf1b1538588a30a8d3b883e2a": {
      "balance": "10000000000000000000000"
    },
    "0x8ed5b88e0f9c407a86b7db69240ecf84660b9ea7": {
      "balance": "10000000000000000000000"
    }
  }
}
)E";
