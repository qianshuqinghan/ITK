/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkMeshBase.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


Copyright (c) 2000 National Library of Medicine
All rights reserved.

See COPYRIGHT.txt for copyright details.

=========================================================================*/
/**
 * itkMeshBase is the base class for the templated itkMesh base classes.
 */

#ifndef __itkMeshBase_h
#define __itkMeshBase_h

#include "itkDataObject.h"

class ITK_EXPORT itkMeshBase : public itkDataObject
{
public:
  /** 
   * Smart pointer typedef support. 
   */
  typedef itkSmartPointer<itkMeshBase> Pointer;

  /** 
   * Create an empty image. 
   */
  static itkMeshBase::Pointer New();

  /** 
   * Restore object to initialized state.
   */
  void Initialize();

  /** 
   * Overload itkDataObject method. This method allocates memory
   * for to support meshes of this dimension (meaning the cells
   * that make up this mesh are of this topological dimension or
   * less).
   */
  virtual void SetDimension(int dim);

protected:
  itkMeshBase();
  ~itkMeshBase();
  itkMeshBase(const itkMeshBase&) {};
  void operator=(const itkMeshBase&) {};

private:
  
};

#endif

