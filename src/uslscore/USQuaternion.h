// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef USQUATERNION_H
#define	USQUATERNION_H

#include <uslscore/USAffine3D.h>
#include <uslscore/USMatrix4x4.h>

//================================================================//
// USQuaternion
//================================================================//
class USQuaternion {
private:

	USVec3D		mV;
	float		mW;

public:

	//----------------------------------------------------------------//
	void			Add					( const USQuaternion& rhs );
	float			Dot					( const USQuaternion& rhs ) const;
	void			Get					( USAffine3D& m ) const;
	void			Get					( USMatrix4x4& m ) const;
	void			Get					( USVec3D& axis, float& angle ) const;
	void			Identity			();
	void			Inverse				();
	float			Length				() const;
	float			LengthSquared		() const;
	void			Multiply			( const USQuaternion& rhs );
	void			Normalize			();
	USVec3D			Rotate				( USVec3D rot ) const;
	void			Scale				( float rhs );
	void			Set					( const USAffine3D& m );
	void			Set					( const USMatrix4x4& m );
	void			Set					( const USVec3D& axis, float angle );
	void			Set					( float x, float y, float z, float w );
	void			Slerp				( USQuaternion q0, USQuaternion q1, float t );
	void			Sub					( const USQuaternion& rhs );
};

#endif