//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018-2019 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#ifndef HEADER_ClothingMaterialLibraryParameters_0p13_h
#define HEADER_ClothingMaterialLibraryParameters_0p13_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace ClothingMaterialLibraryParameters_0p13NS
{

struct StiffnessScaling_Type;
struct ClothingMaterial_Type;

struct ClothingMaterial_DynamicArray1D_Type
{
	ClothingMaterial_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct StiffnessScaling_Type
{
	float compressionRange;
	float stretchRange;
	float scale;
};
struct ClothingMaterial_Type
{
	NvParameterized::DummyStringStruct materialName;
	float verticalStretchingStiffness;
	float horizontalStretchingStiffness;
	float bendingStiffness;
	float shearingStiffness;
	float zeroStretchStiffness;
	float tetherStiffness;
	float tetherLimit;
	bool orthoBending;
	StiffnessScaling_Type verticalStiffnessScaling;
	StiffnessScaling_Type horizontalStiffnessScaling;
	StiffnessScaling_Type bendingStiffnessScaling;
	StiffnessScaling_Type shearingStiffnessScaling;
	float damping;
	float stiffnessFrequency;
	float drag;
	bool comDamping;
	float friction;
	float massScale;
	uint32_t solverIterations;
	float solverFrequency;
	float gravityScale;
	float inertiaScale;
	float hardStretchLimitation;
	float maxDistanceBias;
	uint32_t hierarchicalSolverIterations;
	float selfcollisionThickness;
	float selfcollisionSquashScale;
	float selfcollisionStiffness;
};

struct ParametersStruct
{

	ClothingMaterial_DynamicArray1D_Type materials;

};

static const uint32_t checksum[] = { 0x81ce711f, 0x95e15fb3, 0xfa092d04, 0xcd72e3c8, };

} // namespace ClothingMaterialLibraryParameters_0p13NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ClothingMaterialLibraryParameters_0p13 : public NvParameterized::NvParameters, public ClothingMaterialLibraryParameters_0p13NS::ParametersStruct
{
public:
	ClothingMaterialLibraryParameters_0p13(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ClothingMaterialLibraryParameters_0p13();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingMaterialLibraryParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)13;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(ClothingMaterialLibraryParameters_0p13NS::checksum);
		return ClothingMaterialLibraryParameters_0p13NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingMaterialLibraryParameters_0p13NS::ParametersStruct& parameters(void) const
	{
		ClothingMaterialLibraryParameters_0p13* tmpThis = const_cast<ClothingMaterialLibraryParameters_0p13*>(this);
		return *(static_cast<ClothingMaterialLibraryParameters_0p13NS::ParametersStruct*>(tmpThis));
	}

	ClothingMaterialLibraryParameters_0p13NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingMaterialLibraryParameters_0p13NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class ClothingMaterialLibraryParameters_0p13Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ClothingMaterialLibraryParameters_0p13::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingMaterialLibraryParameters_0p13), ClothingMaterialLibraryParameters_0p13::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ClothingMaterialLibraryParameters_0p13::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingMaterialLibraryParameters_0p13");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingMaterialLibraryParameters_0p13)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ClothingMaterialLibraryParameters_0p13)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ClothingMaterialLibraryParameters_0p13::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ClothingMaterialLibraryParameters_0p13::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingMaterialLibraryParameters_0p13");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ClothingMaterialLibraryParameters_0p13 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingMaterialLibraryParameters_0p13*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingMaterialLibraryParameters_0p13::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ClothingMaterialLibraryParameters_0p13::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ClothingMaterialLibraryParameters_0p13::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ClothingMaterialLibraryParameters_0p13::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
